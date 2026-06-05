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

        // chicken 2 // cow 4
        int left = n % 4;
        if(left <= 1 ){
            left = left + 1; 

        }
        int x = n/4;  
        cout << x + left - 1 << "\n";
    }
    return 0;

}