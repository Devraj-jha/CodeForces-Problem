#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> a(7);
        int total = 0;
        for (int i = 0; i < 7; i++) {
            cin >> a[i];
            total += a[i];
        }

        int ans = INT_MIN;
        for (int i = 0; i < 7; i++) {
            int sum = -total + 2 * a[i];
            ans = max(ans, sum);
        }

        cout << ans << "\n";
    }

    return 0;
}