#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int i = 0;
    while (i < s.length()) {
        if (i + 2 < s.length() && s.substr(i, 3) == "144") {
            i += 3;
        }
        else if (i + 1 < s.length() && s.substr(i, 2) == "14") {
            i += 2;
        }
        else if (s[i] == '1') {
            i += 1;
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}