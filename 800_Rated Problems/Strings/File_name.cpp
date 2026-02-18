#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    
    string s; 
    cin >> s;
    int cn = 0;
   
    int del2 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'x'){
            ++cn;
            if(cn >= 3){
              del2++;
            }
        }else{
            cn = 0;
        }
        
    }
    cout << del2;   
    return 0;  
}  