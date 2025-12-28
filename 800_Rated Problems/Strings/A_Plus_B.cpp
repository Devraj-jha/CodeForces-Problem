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
        int a = s[0] - '0';
        int b = s[2] - '0';
        int sum = a + b ; 
        cout << sum << endl; 
        
    }


    return 0;  
}  
