#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1), giver(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        giver[p[i]] = i;  // inverse mapping
    }

    for (int i = 1; i <= n; i++) {
        cout << giver[i] << " ";
    }

    cout << endl;
    return 0;
}
