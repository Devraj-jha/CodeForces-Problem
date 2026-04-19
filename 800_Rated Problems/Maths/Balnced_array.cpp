#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int k = n / 2;

        if (k % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int sum_even = 0;

        // first half (even numbers)
        for (int i = 1; i <= k; i++) {
            int val = 2 * i;
            cout << val << " ";
            sum_even += val;
        }

        int sum_odd = 0;

        // second half (odd numbers except last)
        for (int i = 1; i < k; i++) {
            int val = 2 * i - 1;
            cout << val << " ";
            sum_odd += val;
        }

        // last element
        cout << sum_even - sum_odd << "\n";
    }

    return 0;
}