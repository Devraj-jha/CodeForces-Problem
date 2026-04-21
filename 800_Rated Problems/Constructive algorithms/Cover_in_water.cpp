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
         string s; 
        cin >> s; 
        int cn = 0; 
        int cr = 0; 

        for(int i = 0; i < n; i++){
               if(s[i] == '.'){
                    cn++; 
                    cr++; 
                    if(cr == 3){
                        cn = 2;
                        break; 
                      
                    
                    }
               } else if(s[i] == '#'){
                        cr = 0; 

                    }    
            }
            
            
            cout << cn << "\n";
        }


    return 0;  
}  
