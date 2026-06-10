#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n, c, k;
        cin >> n >> c >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long power = c;

        for (long long x : a) {
            if (x > power) break;

            long long cap = power - x;      // max flips usable on this monster
            long long use = min(k, cap);

            k -= use;
            power += x + use;
        }

        cout << power << '\n';
    }

    return 0;
}