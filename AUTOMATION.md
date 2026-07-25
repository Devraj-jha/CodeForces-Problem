# 🔄 Auto-Update System

## How It Works

This repo has an **automatic README updater** that keeps the progress stats,
solution counts, and file tree in sync every time you commit.

```
You add a .cpp file → git commit → hook fires → README auto-updates → pushed to GitHub
```

---

## Quick Start

### 1. Add a new solution

```bash
# Drop your .cpp file into the right rating folder
cp my_solution.cpp 800_Rated\ Problems/my_solution.cpp
```

### 2. Commit as usual

```bash
git add .
git commit -m "add: solved problem XYZ"
```

**That's it.** The hook automatically:
- Counts all `.cpp` files across every rating folder
- Updates the progress bar, solution counts, and file tree in README.md
- Commits the updated README
- Pushes everything to GitHub

---

## Manual Run

If you ever need to update the README manually:

```bash
python3 update_readme.py
```

---

## What Gets Updated

| Section | What changes |
|---------|-------------|
| **Progress bar** | Solution counts per rating (800–2000) |
| **Total count** | Grand total in the title badge |
| **File tree** | Shows per-folder solution counts |
| **Empty folders** | Labeled "Work in progress" |
| **New folders** | Missing ratings (1500–2000) are created automatically |

---

## Adding a New Rating Folder

Just create a folder following the naming pattern and the script handles the rest:

```bash
# The script auto-detects any folder matching {number}_Rated or {number}_rated
mkdir 1500_Rated_Problems
```

Ratings 800–2000 in steps of 100 are created automatically if missing.

---

## Naming Convention

Any folder matching this pattern is treated as a rating folder:

```
{number}_Rated_{suffix}    (any case)
```

Examples that all work:
- `800_Rated Problems`
- `900_rated_Problems`
- `1200_Rated Problems`
- `2000_rated problem`

---

## Troubleshooting

**README didn't update?**
Make sure your file ends in `.cpp` — only `.cpp` files are counted.

**Hook didn't fire?**
Check the hook is executable:
```bash
ls -la .git/hooks/post-commit
# Should show: -rwxr-xr-x
```

**Want to skip the auto-update for one commit?**
```bash
git commit --no-verify -m "skip: temporary change"
```

---

## Files Involved

| File | Purpose |
|------|---------|
| `update_readme.py` | Script that regenerates the README |
| `.git/hooks/post-commit` | Git hook that runs the script after each commit |
| `README.md` | Auto-generated — don't edit manually |
