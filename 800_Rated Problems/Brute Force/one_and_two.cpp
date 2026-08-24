#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int totalTwos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 2) {
                totalTwos++;
            }
        }

        // Equal division is impossible
        if (totalTwos % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        // Special case: no 2s
        // Every product is 1, so k = 1 works
        if (totalTwos == 0) {
            cout << 1 << endl;
            continue;
        }

        int needed = totalTwos / 2;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 2) {
                count++;
            }

            if (count == needed) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}