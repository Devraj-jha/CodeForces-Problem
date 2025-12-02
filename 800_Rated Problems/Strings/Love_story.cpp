#include <iostream>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string c = "codeforces";

    while(t--){
        int cn = 0; 
        string s; 
        cin >> s; 
        for (int i = 0; i < 10; i++){
            if(c[i] != s[i]){
                cn++;
            }

        }
        cout << cn << "\n";
    }


    return 0;  
}  
