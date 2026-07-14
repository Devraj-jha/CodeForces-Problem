#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int sum = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (sum + (int)s.size() <= m) {
                sum += s.size();
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}