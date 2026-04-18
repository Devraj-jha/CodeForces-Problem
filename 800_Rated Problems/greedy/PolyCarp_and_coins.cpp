#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;

        long long q = n / 3;
        long long r = n % 3;

        if(r == 0) {
            cout << q << " " << q << "\n";
        }
        else if(r == 1) {
            cout << q + 1 << " " << q << "\n";
        }
        else { // r == 2
            cout << q << " " << q + 1 << "\n";
        }
    }

    


    return 0;  
}  
// n to pay.
// c1 + 2 c2 = n;
//c1 - c2 = minimum...

