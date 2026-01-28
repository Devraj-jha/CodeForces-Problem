#include <iostream>
using namespace std;

int main() {
    int press[3][3];

    // Input the number of presses
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> press[i][j];

    // Loop over each cell
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int total = press[i][j]; // start with its own presses

            // check top neighbor
            if(i > 0) total += press[i-1][j];
            // check bottom neighbor
            if(i < 2) total += press[i+1][j];
            // check left neighbor
            if(j > 0) total += press[i][j-1];
            // check right neighbor
            if(j < 2) total += press[i][j+1];

            // If total presses is even, light is ON (1); if odd, OFF (0)
            if(total % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << "\n"; // new line for next row
    }

    return 0;
}
