#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {

        // Even row → all #
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++)
                cout << "#";
        }
        // Odd rows
        else {
            // If row index % 4 == 1 → # at end
            if (i % 4 == 1) {
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << "#";
            }
            // Else → # at start
            else {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
            }
        }

        cout << '\n'; // new line after each row
    }

    return 0;
}

//(1,1) => 1,m 
//1st row complete filled with xxxx
//thn 2nd listen is filled with ...#
//then 3rd is like #####
