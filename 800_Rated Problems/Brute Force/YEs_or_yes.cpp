#include <iostream>
#include <cctype>

using namespace std;
bool isYes(string s){
    for(char &c : s) c = toupper(c);
    return s == "YES";
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        string s; 
        cin >> s; 
        
        if(isYes(s)) cout << "YES\n";
        else cout << "NO\n";

    }


    return 0;  
}  
