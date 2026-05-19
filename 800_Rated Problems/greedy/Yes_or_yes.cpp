#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        string s; 
        cin >> s; 
        int cn_y = 0; 
        for(int i = 0; i < s.length(); i++){
           
            if(s[i] == 'Y'){
                cn_y++; 

            }
        }
        if(cn_y >=2){
            cout << "NO\n";

        }else {
            cout << "YES\n";
        }

    }
    return 0;

}
// s(1) = s(i + 1)

//ynynynyn
//ynny
//yny
//yy
//no....

