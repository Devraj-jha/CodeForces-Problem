#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    if(n >= 0){
        cout << n; 

    }else {
        n = abs(n);
        int r1 = n/10 * -1; 

        int r2 = ((n/100) * 10 + ( n % 10 )) * -1; 

        if( r1 > r2){
            cout << r1; 

        }else {
            cout << r2; 
        }
    }

    return 0;  
}  