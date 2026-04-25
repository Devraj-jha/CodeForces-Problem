#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool hasEqualAdjacent = false;

        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                hasEqualAdjacent = true;
                break;
            }
        }

        if (hasEqualAdjacent) {
            cout << 1 << endl;
        } else {
            cout << s.length() << endl;
        }
    }

    return 0;
}