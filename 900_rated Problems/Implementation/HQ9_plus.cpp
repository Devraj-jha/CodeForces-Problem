#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s; 
    bool output = false;
    for(int i = 0; i < s.length(); i++){ 
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' ){
            output = true;
            break;
        }

    }
    if(output){

        cout << "YES" <<endl;

    }else {
        cout << "NO" << endl;
    }
    return 0;  
}  