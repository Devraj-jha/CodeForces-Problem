#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int,int>> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        bool shower = false;

        // before first task
        if (v[0].first >= s) {
            shower = true;
        }

        // between tasks
        for (int i = 0; i < n - 1; i++) {
            if (v[i + 1].first - v[i].second >= s) {
                shower = true;
            }
        }

        // after last task
        if (m - v[n - 1].second >= s) {
            shower = true;
        }

        cout << (shower ? "YES\n" : "NO\n");
    }

    return 0;
}
//inputs s mintues, day has only m minutes.

// n task planned for the day. 
// task representation (li, ri)
// free time, between intervals. = s 


