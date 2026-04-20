
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int evenMismatch = 0, oddMismatch = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) evenMismatch++;
                else oddMismatch++;
            }
        }

        if (evenMismatch != oddMismatch) {
            cout << -1 << "\n";
        } else {
            cout << evenMismatch << "\n";
        }
    }

    return 0;
}