#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Array to track if a problem has been solved before
        // Since problems are A-Z, size 26 is enough
        vector<bool> solved(26, false);

        int balloons = 0;

        for (char c : s) {
            int idx = c - 'A'; // map 'A'..'Z' to 0..25

            if (!solved[idx]) {
                // First time solving this problem
                balloons += 2; 
                solved[idx] = true;
            } else {
                // Already solved before
                balloons += 1;
            }
        }

        cout << balloons << "\n";
    }

    return 0;
}