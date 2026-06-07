#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        vector<long long> a(n), original(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            original[i] = a[i];  // store original
        }

        for (int i = 0; i < m; ++i) {
            int b;
            long long c;
            cin >> b >> c;
            --b;  // convert to 0-based index
            a[b] += c;

            // check for crash
            bool crashed = false;
            for (int j = 0; j < n; ++j) {
                if (a[j] > h) {
                    crashed = true;
                    break;
                }
            }
            if (crashed) {
                a = original; // reset array
            } else {
                original = a; // update original if no crash
            }
        }

        // print result
        for (int i = 0; i < n; ++i) {
            cout << a[i] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
