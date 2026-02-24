#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long x, n;
        cin >> x >> n;

        long long r = n % 4;

        if (r == 0) {
            cout << x << "\n";
        }
        else if (r == 1) {
            if (x % 2 == 0) cout << x - n << "\n";
            else cout << x + n << "\n";
        }
        else if (r == 2) {
            if (x % 2 == 0) cout << x + 1 << "\n";
            else cout << x - 1 << "\n";
        }
        else { // r == 3
            if (x % 2 == 0) cout << x + n + 1 << "\n";
            else cout << x - n - 1 << "\n";
        }
    }

    return 0;
}