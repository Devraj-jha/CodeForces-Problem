#include <iostream>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d;
    string s; 
    int cn = 0;

    cin >> a >> b >> c >> d; 
    cin >> s;

    for(int i = 0; i < s.length(); i++){

        int digit = s[i] - '0';

        if(digit == 1){
            cn = cn + a;
        }else if(digit == 2){
            cn = cn + b;
        }else if(digit == 3){
            cn = cn + c;
        }else if(digit == 4){
            cn = cn + d;
        }
    }
    cout << cn;


    return 0;  
}  
