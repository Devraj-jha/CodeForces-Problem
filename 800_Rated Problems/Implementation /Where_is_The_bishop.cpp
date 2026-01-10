#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<string> board(8);
        for (int i = 0; i < 8; i++) {
            cin >> board[i];
        }

        
        for (int r = 1; r <= 6; r++) {
            for (int c = 1; c <= 6; c++) {
                if (board[r][c] == '#' &&
                    board[r - 1][c - 1] == '#' &&
                    board[r - 1][c + 1] == '#' &&
                    board[r + 1][c - 1] == '#' &&
                    board[r + 1][c + 1] == '#') {
 
                    cout << r + 1 << " " << c + 1 << "\n";
                }
            }
        }
    }

    return 0;
}
