#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {

        int n, k, x;
        cin >> n >> k >> x;

        // If 1 is allowed
        if(x != 1) {

            cout << "YES\n";
            cout << n << "\n";

            for(int i = 0; i < n; i++) {
                cout << 1 << " ";
            }

            cout << "\n";
        }

        // x == 1
        else {

            // if only number 1 existed, impossible
            if(k == 1) {
                cout << "NO\n";
            }

            // n even -> use all 2s
            else if(n % 2 == 0) {

                cout << "YES\n";
                cout << n / 2 << "\n";

                for(int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }

                cout << "\n";
            }

            // n odd
            else {

                // need 3
                if(k >= 3) {

                    cout << "YES\n";

                    int cnt = 1 + (n - 3) / 2;
                    cout << cnt << "\n";

                    cout << 3 << " ";

                    for(int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }

                    cout << "\n";
                }
                else {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}