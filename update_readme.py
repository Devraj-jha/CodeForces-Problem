#!/usr/bin/env python3
"""
Auto-updater for CodeForces Problems README.
Counts solutions per rating folder, generates progress stats,
creates missing rating folders (1500-2000), commits & pushes.
"""

import os
import re
import subprocess
import sys

REPO_DIR = os.path.dirname(os.path.abspath(__file__))
README_PATH = os.path.join(REPO_DIR, "README.md")

RATING_STEP = 100
MAX_RATING = 2000
MIN_RATING = 800

# Folders to skip when scanning (case-insensitive)
SKIP_NAMES = {'.git', '.claude'}
# Non-rating content folders to report
EXTRA_FOLDERS = {
    'Contests': 'Contest submissions',
    'mini_problems': 'Small practice problems',
    'Topic revision': 'Topic-wise revision notes & code',
}


def get_rating_from_name(name):
    """Extract rating number from a folder name. Returns None if not a rating folder."""
    m = re.search(r'(\d+)\s*_+\s*[Rr][Aa][Tt][Ee][Dd]', name)
    if m:
        rating = int(m.group(1))
        if MIN_RATING <= rating <= MAX_RATING and rating % RATING_STEP == 0:
            return rating
    return None


def find_rating_dirs():
    """Find all rating directories, returning {rating: {'actual_name': ..., 'count': ..., 'path': ...}}."""
    rating_dirs = {}
    for item in os.listdir(REPO_DIR):
        path = os.path.join(REPO_DIR, item)
        if not os.path.isdir(path) or item in SKIP_NAMES:
            continue
        rating = get_rating_from_name(item)
        if rating is None:
            continue
        count = sum(1 for _, _, files in os.walk(path) for f in files if f.endswith('.cpp'))
        rating_dirs[rating] = {
            'actual_name': item,
            'count': count,
            'path': path,
            'new': False,
        }
    return rating_dirs


def create_missing_folders(rating_dirs):
    """Create rating folders that don't exist yet (1500, 1600, ... 2000)."""
    existing = set(rating_dirs.keys())
    # Expected ratings from 800 to 2000 in steps of 100
    expected = set(range(MIN_RATING, MAX_RATING + 1, RATING_STEP))
    missing = sorted(expected - existing)

    if not missing:
        return rating_dirs

    for rating in missing:
        name = f"{rating}_Rated_Problems"
        path = os.path.join(REPO_DIR, name)
        os.makedirs(path, exist_ok=True)
        rating_dirs[rating] = {
            'actual_name': name,
            'count': 0,
            'path': path,
            'new': True,
        }
        print(f"  ✓ Created {name}/")
    return rating_dirs


def star_rating(rating):
    """★ rating based on CF-like difficulty labels."""
    if rating <= 800:
        return "★☆☆☆☆"
    elif rating <= 900:
        return "★★☆☆☆"
    elif rating <= 1000:
        return "★★★☆☆"
    elif rating <= 1200:
        return "★★★★☆"
    else:
        return "★★★★★"


def progress_bar(count, maximum, width=30):
    """Unicode block progress bar."""
    if maximum <= 0:
        return "░" * width
    filled = int((count / maximum) * width) or (1 if count else 0)
    return "█" * filled + "░" * (width - filled)


def build_readme(rating_dirs):
    """Return the full README text."""
    sorted_ratings = sorted(rating_dirs.keys())

    # ——— Count non-rating folders ———
    extra_counts = {}
    for folder, desc in EXTRA_FOLDERS.items():
        p = os.path.join(REPO_DIR, folder)
        if os.path.isdir(p):
            extra_counts[folder] = sum(1 for _, _, files in os.walk(p) for f in files if f.endswith('.cpp'))
        else:
            extra_counts[folder] = 0

    # ——— Totals ———
    rating_total = sum(d['count'] for d in rating_dirs.values())
    extra_total = sum(extra_counts.values())
    grand_total = rating_total + extra_total

    # Bar scale
    all_counts = [d['count'] for d in rating_dirs.values()] + list(extra_counts.values())
    max_count = max(all_counts) if all_counts else 1

    # ——— Progress table ———
    prog = ["```"]
    prog.append(f"{'Rating':<12} {'Solved':>7}   Progress")
    prog.append("─" * 56)

    for r in sorted_ratings:
        c = rating_dirs[r]['count']
        stars = star_rating(r)
        if c == 0:
            prog.append(f" {r:<4} {stars:<8} Work in progress")
        else:
            prog.append(f" {r:<4} {stars:<8} {c:>7}   {progress_bar(c, max_count)}")

    for folder in ['Contests']:
        c = extra_counts.get(folder, 0)
        if c == 0:
            prog.append(f" {'Contests':<13} Work in progress")
        else:
            prog.append(f" {'Contests':<13} {c:>7}   {progress_bar(c, max_count)}")

    prog.append("─" * 56)
    prog.append(f" {'TOTAL':<13} {grand_total:>7}   solutions across {len(sorted_ratings)} rating categories")
    prog.append("```")

    # ——— Structure tree ———
    tree = ["```"]
    tree.append("CodeForces-Problem/")
    for r in sorted_ratings:
        d = rating_dirs[r]
        label = f"# {d['count']} solution{'s' if d['count'] != 1 else ''}" if d['count'] else "# Work in progress"
        tree.append(f"├── 📂 {d['actual_name']:<34s} {label}")

    for folder in ['Contests']:
        c = extra_counts.get(folder, 0)
        label = f"# {c} solution{'s' if c != 1 else ''}" if c else "# Work in progress"
        tree.append(f"├── 📂 {folder + '/':<34s} {label}")

    # Other non-rating dirs
    for folder, desc in EXTRA_FOLDERS.items():
        if folder in ('Contests',):
            continue
        p = os.path.join(REPO_DIR, folder)
        if os.path.isdir(p):
            tree.append(f"├── 📂 {folder + '/':<34s} # {desc}")

    # Root-level files
    root_cpp = [f for f in os.listdir(REPO_DIR) if f.endswith('.cpp') and os.path.isfile(os.path.join(REPO_DIR, f))]
    templates = {
        'CppSkelton.cpp': 'Fast I/O skeleton template',
        'cppSkeletonTestCases.cpp': 'Skeleton with test case I/O',
        'Vector_input_skeleton.cpp': 'Vector input template',
        'cpp_vector_test_cases.cpp': 'Vector test case template',
    }
    entries = []
    for f, desc in templates.items():
        if os.path.isfile(os.path.join(REPO_DIR, f)):
            entries.append(f"├── 📄 {f:<34s} # {desc}")
    for f in sorted(f for f in root_cpp if f not in templates):
        entries.append(f"├── 📄 {f:<34s}")
    entries.append(f"└── 📄 README.md")
    tree.extend(entries)
    tree.append("```")

    # ——— Topics table ———
    topics = {
        800: "Implementation, Math basics, Strings, Conditionals, Loops",
        900: "Greedy, Two Pointers, Sorting, Basic DP",
        1000: "Binary Search, Graph basics, Number Theory, Prefix Sums",
        1100: "DP, Constructive Algorithms, Bit Manipulation",
        1400: "Advanced DP, Graph Theory, Segment Trees, Math",
    }
    topic_lines = ["| Difficulty | Typical Topics |", "|:----------:|----------------|"]
    for rating, desc in topics.items():
        label = f"**{rating}**" if rating != 1100 else "**1100-1200**"
        topic_lines.append(f"| {label} | {desc} |")

    return f"""<div align="center">

# <img src="https://codeforces.org/favicon.ico" width="30" /> CodeForces Problems

### A curated collection of **{grand_total}+** competitive programming solutions in C++

[![GitHub stars](https://img.shields.io/github/stars/Devraj-jha/CodeForces-Problem?style=flat&logo=github&color=yellow)](https://github.com/Devraj-jha/CodeForces-Problem/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/Devraj-jha/CodeForces-Problem?style=flat&logo=github&color=blue)](https://github.com/Devraj-jha/CodeForces-Problem/network/members)
[![GitHub last commit](https://img.shields.io/github/last-commit/Devraj-jha/CodeForces-Problem?style=flat&color=green)](https://github.com/Devraj-jha/CodeForces-Problem/commits)
[![Language](https://img.shields.io/badge/language-C%2B%2B-blue?style=flat&logo=cplusplus)](https://isocpp.org/)

---

Solutions organized by **difficulty rating** with reusable skeletons and templates
for fast contest-solving.

</div>

## 📊 Progress at a Glance

{"\n".join(prog)}

## 📁 Repository Structure

{"\n".join(tree)}

## 🚀 Quick Start Skeleton

Get started solving in seconds with this fast I/O template:

```cpp
#include <iostream>
using namespace std;

int main() {{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // your solution here
    return 0;
}}
```

> **Tip:** Use the template files in the root — `CppSkelton.cpp` for basic problems,
> `cppSkeletonTestCases.cpp` when you need test case loops, and
> `Vector_input_skeleton.cpp` for problems requiring array/vector input.

## 🛠 Built With

- **Language:** C++ (C++17)
- **Platform:** [Codeforces](https://codeforces.com/)
- **IDE:** VS Code

## 🧠 Topics Covered

{"\n".join(topic_lines)}

## 📝 How to Compile & Run

```bash
# Compile
g++ -std=c++17 -O2 -o solution solution.cpp

# Run
./solution

# Run with input file
./solution < input.txt
```

## 📜 License

This project is open source. Feel free to use these solutions for learning!

---

<div align="center">

**Happy Solving! 🏆**

*Keep pushing your rating higher — one problem at a time.*

</div>
"""


def git_push():
    """Stage all changes, commit, and push. Returns True if anything was pushed."""
    try:
        subprocess.run(['git', 'add', '-A'], cwd=REPO_DIR, check=True, capture_output=True)
        # Check if anything staged
        r = subprocess.run(['git', 'diff', '--cached', '--quiet'], cwd=REPO_DIR, capture_output=True)
        if r.returncode == 0:
            print("  ℹ No changes to commit.")
            return False

        # Build commit message with solution count
        rating_dirs = find_rating_dirs()
        total = sum(d['count'] for d in rating_dirs.values())
        contest_dir = os.path.join(REPO_DIR, "Contests")
        if os.path.isdir(contest_dir):
            total += sum(1 for _, _, files in os.walk(contest_dir) for f in files if f.endswith('.cpp'))

        msg = f"docs: auto-update README & structure [{total} solutions]"
        subprocess.run(['git', 'commit', '-m', msg], cwd=REPO_DIR, check=True, capture_output=True)
        print(f'  ✓ Committed: "{msg}"')

        subprocess.run(['git', 'push', 'origin', 'main'], cwd=REPO_DIR, check=True, capture_output=True)
        print("  ✓ Pushed to origin/main")
        return True

    except subprocess.CalledProcessError as e:
        err = e.stderr.decode().strip() if e.stderr else str(e)
        print(f"  ✗ Git error: {err}")
        return False


def main():
    print("🚀 CodeForces README Auto-Updater\n")

    rating_dirs = find_rating_dirs()
    print(f"  Found {len(rating_dirs)} rating categories")

    # Create missing folders (1500-2000)
    print("\n  Checking for missing rating folders…")
    rating_dirs = create_missing_folders(rating_dirs)

    # Print stats
    print(f"\n  {'Rating':>7} │ {'Files':>5}")
    print("  " + "─" * 15)
    for r in sorted(rating_dirs):
        d = rating_dirs[r]
        flag = "  🆕" if d['new'] else ""
        print(f"  {r:>7} │ {d['count']:>5}{flag}")

    # Generate README
    print("\n  Generating README.md …")
    readme = build_readme(rating_dirs)
    with open(README_PATH, 'w') as f:
        f.write(readme)
    print("  ✓ README.md written")

    # Commit & push
    print("\n  Pushing to GitHub …")
    git_push()

    print("\n✅ Done!")


if __name__ == "__main__":
    main()
