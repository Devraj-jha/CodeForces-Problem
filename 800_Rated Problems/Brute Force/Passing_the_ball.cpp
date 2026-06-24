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
        for(int i = 0; i < s.size(); i++){
            cn ++; 
            if(s[i] == 'L'){
                break; 
            }
        }

        cout << cn <<"\n";
    }
    return 0;

}