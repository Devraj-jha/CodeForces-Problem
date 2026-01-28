#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int cnt = 0;
        int x = 0;

        while (cnt < k) {
            x++;

            if (x % 3 != 0 && x % 10 != 3) {
                cnt++;
            }
        }

        cout << x << '\n';
    }

    return 0;
}
