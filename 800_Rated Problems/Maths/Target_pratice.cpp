#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int total_points = 0;
        vector<string> grid(10); //definted a vector of strings. instead of taking indivual characters.



        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        } // input taking 

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j});
                    total_points += ring + 1;
                }
            }
        }

        cout << total_points << '\n';
    }

    return 0;
}
