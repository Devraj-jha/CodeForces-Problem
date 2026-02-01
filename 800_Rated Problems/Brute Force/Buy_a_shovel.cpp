#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,r; 
    cin >> k >> r; 
    
    // no change, 

    // either 10, or r;

     for(int i = 1; i <= 10; i++){
        if((k * i - r) % 10 == 0 || (k * i % 10 == 0)){
            cout << i << endl;
            break;  
        }  
     }

    return 0;  
}  