#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        long long  a,b,c,d; 
        cin >> a >> b >> c >> d; 

        if(d < b){
            cout << -1 << '\n';
            continue;
        }

        long long diag = d - b; 
        long long left = a + diag -c ; 
        
        if( left < 0){
            cout << -1 << '\n';
        }else{
            cout << diag + left << '\n' ; 

        }

    }

    return 0;  
}  
