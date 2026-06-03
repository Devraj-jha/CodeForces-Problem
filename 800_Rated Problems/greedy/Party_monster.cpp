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
        string s; cin >> s;


        int cn_righ = 0; 
        int cn_left = 0; 
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                cn_righ++;
            }else {
                cn_left++;
            }
        }
        if(cn_left == cn_righ){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;

}