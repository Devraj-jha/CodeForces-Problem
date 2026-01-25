#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool done = false;

        // Try to improve lexicographically
        for (int i = 0; i < n && !done; i++) {
            int maxVal = p[i];
            int pos = i;

            // Find maximum in suffix
            for (int j = i; j < n; j++) {
                if (p[j] > maxVal) {
                    maxVal = p[j];
                    pos = j;
                }
            }

            // If we can improve
            if (maxVal > p[i]) {
                reverse(p.begin() + i, p.begin() + pos + 1);
                done = true;
            }
        }

        // Output result
        for (int x : p) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
