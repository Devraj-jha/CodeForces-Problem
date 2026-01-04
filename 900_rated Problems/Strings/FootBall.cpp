#include <iostream>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int cn = 1, sn = 0;  
    cin >> s; 
    for(int i = 0; i < s.length(); i++){
       if(s[i] == s[i + 1]){
            cn++;
            if(cn == 7){
                sn = 1; 
            }
       }else{
        cn = 1; 
       }

    }
    
    if(sn == 1){
        cout << "YES"; 
    }else {
        cout << "NO";
    }


    return 0;  
}  