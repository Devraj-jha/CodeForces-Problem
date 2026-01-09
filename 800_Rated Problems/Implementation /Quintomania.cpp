#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        bool is_melody = true;

        for (int i = 0; i < n - 1; i++) {
            int diff = abs(v[i] - v[i + 1]);
            if (diff != 5 && diff != 7) {
                is_melody = false;
                break;
            }
        }

        cout << (is_melody ? "YES\n" : "NO\n");
    }

    return 0;
}
