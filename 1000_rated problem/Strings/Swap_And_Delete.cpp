#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int total0 = 0, total1 = 0;
        for (char c : s) {
            if (c == '0')
                total0++;
            else
                total1++;
        }

        int kept = 2 * min(total0, total1);
        int answer = s.length() - kept;

        cout << answer << '\n';
    }

    return 0;
}
