#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    double sn = 0;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        sn += a;
    }

    cout << fixed << setprecision(6) << sn / n;

    return 0;
}
