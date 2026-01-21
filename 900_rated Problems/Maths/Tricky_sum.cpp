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
        int power = 1; 
        int sum = 0; 
    
        for(int i = 1; i <=n; i ++){


            if(i == power  ){
                 sum = sum - i; 
                 power = power * 2; 
            }else {
              
                sum = sum + i; 
            }

        }

        cout << sum << "\n";

    }

// ,1,2 ,4, 8
    return 0;  
}  
