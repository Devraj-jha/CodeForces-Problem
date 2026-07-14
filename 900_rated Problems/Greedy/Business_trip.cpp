#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    int arr[12];

    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
    }

    if (k == 0) {
        cout << 0 << '\n';
        return 0;
    }

    sort(arr, arr + 12, greater<int>());

    int sum = 0;
    int ans = -1;

    for (int i = 0; i < 12; i++) {

        sum += arr[i];

        if (sum >= k) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}