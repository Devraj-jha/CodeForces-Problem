//author => devraj jha.... 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, d;
        cin >> n >> d;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<long long> b(2 * n);
        for (int i = 0; i < n; i++) {
            b[i] = a[i];
            b[i + n] = a[i];
        }
        
        vector<long long> p(2 * n + 1, 0);
        for (int i = 0; i < 2 * n; i++) p[i + 1] = p[i] + b[i];
        
        auto sum = [&](int l, int r) { return p[r + 1] - p[l]; };
        
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long fov = sum(i + n - d, i + n - 1) + sum(i + 1, i + d);
            long long c = 2LL * d * a[i] - fov;
            if (c > 0) ans += c;
        }
        
        cout << ans << "\n";
    }
    return 0;
}