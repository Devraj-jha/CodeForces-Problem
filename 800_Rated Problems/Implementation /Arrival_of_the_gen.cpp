#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_h = -1, min_h = 101;
    int max_pos = 0, min_pos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max_h) {           // leftmost maximum
            max_h = a[i];
            max_pos = i;
        }
        if (a[i] <= min_h) {          // rightmost minimum
            min_h = a[i];
            min_pos = i;
        }
    }

    int ans = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) {
        ans -= 1;
    }

    cout << ans << endl;
    return 0;
}
