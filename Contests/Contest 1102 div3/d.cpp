#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool ok = true;
        long long y_prev = 0;
        for (int i = 0; i < n - 1; i++) {
            long long ti = b[i] - a[i];
            long long yi = ti + y_prev;
            if (yi < 0) {
                ok = false;
                break;
            }

           
            y_prev = yi;
        }
        if (ok) {
            long long tlast = b[n - 1] - a[n - 1];
            if (tlast + y_prev < 0) ok = false;
        }

        if (ok)
    cout << "YES\n";
    else
    cout << "NO\n";
    }
    return 0;
}

//auther devraj jha... 