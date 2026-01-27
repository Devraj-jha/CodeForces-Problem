#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;

        int d = x[0] - '0';   // the digit (1–9)
        int k = x.size();    // number of digits

        int result = (d - 1) * 10 + k * (k + 1) / 2;
        cout << result << '\n';
    }

    return 0;
}
