#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // If already not sorted
        if (!is_sorted(v.begin(), v.end())) {
            cout << 0 << '\n';
            continue;
        }

        int mn = 1e9;

        for (int i = 0; i < n - 1; i++) {
            mn = min(mn, v[i + 1] - v[i]);
        }

        cout << mn / 2 + 1 << '\n';
    }

    return 0;
}