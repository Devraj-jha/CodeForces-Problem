#include <iostream>
#include <string>
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
        int balance = 0;
        int cn=0;
        for(char c : s){
            if(c == '('){
                balance++; //

            }else if(c == ')'){
                balance--;
            }

            if(balance < 0) {
                cn ++;
                 balance = 0;
            }
        }
        cout << cn << "\n"; 
    }


    return 0;  
}  
//given, => bracket sqe s (n lenght) 
// n -> even n/2 opening and closing

// one move -> either front or back
// regular bracket sequence, => (()) 