#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long ans;

        if (b >= 3 * a) {
            ans = n * a;
        } else {
            ans = (n / 3) * b + min((n % 3) * a, b);
        }

        cout << ans << '\n';
    }

    return 0;
}