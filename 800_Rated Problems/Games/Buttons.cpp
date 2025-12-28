#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b,c;
        int anna,katie;
        cin >> a >> b >> c;
        //so this is the game of runnig out.... 
        //who runs out faster.
        //there is possiblity of even and odd. 

        if(c %2 != 0){
            anna = a + c/2 + 1;  
            katie = b + c/2;            
        }else {
            anna = a + c/2;
            katie = b + c/2; 

        }
        
        if( anna > katie){
            cout << "First\n";
        }else if (katie > anna ){
            cout << "Second\n";
        }else if( katie == anna){
            cout << "Second\n";
        }
    }
    
    
    return 0;  
}  
// int sum = a + b + c; 
// int anna = a + c; 
// int katie = b + c; 
