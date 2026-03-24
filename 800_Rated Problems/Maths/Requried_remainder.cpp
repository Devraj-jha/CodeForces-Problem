#include <iostream>
#include <vector>

// 2 3 4 1 => r b r b .. -> b r b r 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
       int x,y,n; 
       cin >> x >> y >> n; 
       
       // k mod x= y; 

       for(int i = n; i >= 0 ; i-- ){
        if(i % x == y){
            cout << i << endl; 
            break; 
        }
       }

    }


    return 0;  
}  
