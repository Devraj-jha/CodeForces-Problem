#include <iostream>


using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    bool blackWhite = true;

    for (int i = 0; i < n * m; i++) {
        string s;
        cin >> s;   // reads B, W, C, M, Y, G safely

        if (s == "C" || s == "M" || s == "Y" || s == "G") {
            blackWhite = false;
        }
    }

    if (blackWhite)
        cout << "#Black&White";
    else
        cout << "#Color";

    return 0;
}