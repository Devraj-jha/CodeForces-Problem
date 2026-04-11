#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int temp = n;   
        int cn = 0;

        // Count non-zero digits
        while(temp) {
            if(temp % 10 != 0) cn++;
            temp /= 10;
        }

        cout << cn << "\n";

        int place = 1;

       
        while(n > 0) {
            int digit = n % 10;

            if(digit != 0) {
                cout << digit * place << " ";
            }

            n /= 10;
            place *= 10;
        }

        cout << "\n";
    }

    return 0;
}