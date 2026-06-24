#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        vector<int> a(k);
        vector<int> freq(k + 1, 0);

        for (int i = 0; i < k; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int x = k - 2;

        for (int d = 1; d * d <= x; d++) {
            if (x % d) continue;

            int e = x / d;

            if (d == e) {
                if (freq[d] >= 2) {
                    cout << d << ' ' << e << '\n';
                    break;
                }
            } else {
                if (freq[d] > 0 && freq[e] > 0) {
                    cout << d << ' ' << e << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}