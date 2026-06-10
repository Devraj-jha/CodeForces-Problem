#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            vector<pair<long long, int>> events;

            for (int j = i + 1; j < n; j++) {

                if (a[j] > a[i]) {
                    long long L = a[i] + a[j] + 1;

                    events.push_back({L, +1});
                }
                else if (a[j] < a[i]) {
                    long long R = a[i] + a[j] - 1;

                    events.push_back({(long long)-4e18, +1});
                    events.push_back({R + 1, -1});
                }
            }

            sort(events.begin(), events.end());

            int cur = 0;
            int best = 0;

            for (auto &[pos, delta] : events) {
                cur += delta;
                best = max(best, cur);
            }

            ans[i] = best;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i + 1 == n];
        }
    }

    return 0;
}