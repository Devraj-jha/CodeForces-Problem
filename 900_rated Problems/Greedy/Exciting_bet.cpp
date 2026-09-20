#include <iostream>
#include <algorithm>

#include <cstdlib>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        long long a,b; 
        cin >> a >> b; 



        if(a == b){
            cout << 0 << " " << 0 << endl;
            continue;
        }

        long long num = abs(a - b);

        long long op = a % num; 

        long long mini = min( op, num - op);
        cout << num << " " << mini << endl;


    }
    return 0;

}
///
// either a and b > 0 decrease by 1 else incrlase both by 1;

// a = 3 b == 9

// 8 and 5
// 7 4 
// 6 3 ;

// 5 2 
 /// gcd is just the hcf of the two numbers.

 // if one of them beocoem  zero that is a great gcd/

 // 5 4 
 // 3 9
 // 6
 // 6 12;
 // 