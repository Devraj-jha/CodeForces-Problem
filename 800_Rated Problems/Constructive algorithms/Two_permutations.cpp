#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){

        int n,a,b; 

        cin >>  n >> a >> b ; 

       if (n == a && n == b) {
            cout << "Yes\n";
            continue;
        }

        if(b == n || a == n){
            cout << "No\n";
            continue;
        }
      if( n - (a + b) >= 2){
        cout << "Yes \n";
      }else {
        cout << "No\n";
      }

    }
    return 0;

}
// 2 1 2 
// 1 2 
// 1 2 
// 

//  5 
// 5  1 ->
// 5 
// 2 3 
// 1 2 3 4 5 
//  5 
//  2 2 
// it wouldn't work 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 

// 5
// 4 4 
// 1 2 3 4 5 
// 1 2 3 4 5 