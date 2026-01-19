#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long cnt = 0;
        bool ok = true;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
            } else if (n % 3 == 0) {
                n *= 2;
            } else {
                ok = false;
                break;
            }
            cnt++;
        }

        if (ok)
            cout << cnt << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}
