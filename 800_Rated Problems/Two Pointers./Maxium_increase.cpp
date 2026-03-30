#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev, curr_val;
    cin >> prev;

    int curr = 1, ans = 1;

    for (int i = 1; i < n; i++) {
        cin >> curr_val;

        if (curr_val > prev) {
            curr++;
        } else {
            curr = 1;
        }

        ans = max(ans, curr);
        prev = curr_val;
    }

    cout << ans;
}