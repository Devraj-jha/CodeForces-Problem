#include <iostream>
#include <cmath>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b; 
        cin >> a >> b; 
        
        int arr[10] = {10,9,8,7,6,5,4,3,2,1};

        int remain = abs(a - b); 
        int cn = 0; 

       
        for (int i = 0; i < 10 && remain > 0; i++) {
            cn += remain / arr[i];
            remain %= arr[i];
        }

        cout << cn << '\n';
    }

    return 0;  
}  
