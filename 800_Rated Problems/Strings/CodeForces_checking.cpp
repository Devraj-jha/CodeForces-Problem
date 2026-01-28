#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
                
        char c; 
        cin >> c; 
        string s = "codeforces";
        bool appear = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == c){
                appear = true;
                break;
            }
        }
        if(appear){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }


    return 0;  
}  
