#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;               // number of test cases

    while (t--) {

        int n;
        cin >> n;           // size of the array

        vector<int> v(n);   // resize vector to size n

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int max_zero = 0;
        int curr = 0;

        for (int x : v) {
            if (x == 0) {
                curr++;
                max_zero = max(max_zero, curr);
            } else {
                curr = 0;   // reset correctly
            }
        }

        cout << max_zero << "\n";
    }

    return 0;
}
