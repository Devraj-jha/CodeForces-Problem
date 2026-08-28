#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 


        if(n <= 10){
            cout << n << endl; 
            continue;
        }
        // 10 + 9 + 9 + 1 
        int l = n;
        while( l >= 10){
            l = l/10;
        }
        int count = 0; 
        int num = n; 

        while(num > 0){
            num = num/10;
            count++;
        }

    

        cout << (count - 1) * 9 + l << endl;

    }
    return 0;

}
//9 + 10 20 30 40
//  111 

// 3
// 9 9 1 


// 9 10 20 30 40 50 60 ... 100 
//