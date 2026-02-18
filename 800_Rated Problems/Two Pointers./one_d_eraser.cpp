#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
         int n,k; 
         cin >> n >> k;
         string s;
         cin >> s; 
         int cn = 0; 
        
         for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                cn++;
                i = i+ (k - 1);
            }
         }
         cout << cn << endl; 

    }


    return 0;  
}  
