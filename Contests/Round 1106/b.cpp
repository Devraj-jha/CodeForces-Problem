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

        long long ans = 0;

        for (long long b = 1; b <= n; b++) {
            long long mulp = n / b;
            ans = ans + mulp * mulp;
        }

        cout << ans << '\n';
    }

    return 0;
}

//devraj jha
