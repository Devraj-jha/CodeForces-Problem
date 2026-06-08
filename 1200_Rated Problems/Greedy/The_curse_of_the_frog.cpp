#include <iostream>

using namespace std;

using int64 = long long;
using i128 = __int128_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        long long x;
        cin >> n >> x;

        i128 S = 0;
        long long G = 0;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            S += (i128)a * (b - 1);

            long long g = a * b - c;
            G = max(G, g);
        }

        i128 X = x;

        if (S >= X) {
            cout << 0 << '\n';
            continue;
        }

        if (G <= 0) {
            cout << -1 << '\n';
            continue;
        }

        i128 need = X - S;
        i128 ans = (need + G - 1) / G;

        cout << (long long)ans << '\n';
    }

    return 0;
}