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
        // I must choose a maximum number 
        //such that.
        // x + 2x + 3x + 
          if (n == 3)
            cout << 3 << '\n';
            else
            cout << 2 << '\n';
    }


    return 0;  
}  
