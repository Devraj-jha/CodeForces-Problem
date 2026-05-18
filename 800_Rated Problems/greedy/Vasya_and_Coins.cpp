#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b; 
        cin >> a >> b; 

        // a = 1 burle 
        // b = 2 burle 

        if(a == 0){
            cout << 1 << "\n";

        }else {
            cout << a + 2 * b + 1 << "\n";
        }
        
     
    }

    return 0;  
}  
