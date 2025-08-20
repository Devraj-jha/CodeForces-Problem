#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n > 0) {
        long long a, b;
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << "\n";
        } else {
            cout << b - (a % b) << "\n";
        }
        --n;
    }

    return 0;
}
