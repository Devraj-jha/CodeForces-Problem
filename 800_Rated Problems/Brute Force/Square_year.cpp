#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int s;
        cin >> s;
        int a,b;
        for(int a = 0;a < 99;a++){
            for( int b = 0; b < 99; b++){
                if((a + b)*(a + b) == s) {
                    a = a;
                    b = b; 

                    break; 

        }
            }

        }
        cout << a << b;
        
    }


    return 0;  
}  
