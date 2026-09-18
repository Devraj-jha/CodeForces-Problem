#include <iostream>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    string ans;

    for (int i = 0; i < n.length(); i++) {

        if (i + 2 < n.length() &&
            n[i] == 'W' &&
            n[i + 1] == 'U' &&
            n[i + 2] == 'B') {

            ans += ' ';
            i += 2;

        } else {
            ans += n[i];
        }
    }

    if (!ans.empty() && ans[0] == ' ')
        ans.erase(0, 1);

    if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();

    cout << ans << '\n';

    return 0;
}