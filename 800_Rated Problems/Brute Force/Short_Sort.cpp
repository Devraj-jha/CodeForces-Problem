#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    // Set of strings that can become "abc" with at most one swap
    set<string> valid = {"abc", "acb", "bac", "cba"};

    while(t--) {
        string s;
        cin >> s;

        if(valid.count(s)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
