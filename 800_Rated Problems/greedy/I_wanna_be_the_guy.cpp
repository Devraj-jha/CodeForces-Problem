#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> canPass(n + 1, false);

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        canPass[x] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        canPass[y] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!canPass[i]) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}