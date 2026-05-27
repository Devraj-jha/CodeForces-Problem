#include <iostream>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s; 
    int cn_o = 0;
    int cn_dash = 0; 
    for(int i = 0; i < s.length(); i++){

        if(s[i] == 'o'){
            cn_o++;
        }else {
            cn_dash++;
        }
    }
if(cn_o <=1 || cn_dash == 0 ){
    cout << "YES";

    
}else if(cn_dash % cn_o == 0){
    cout << "YES"; 
}else {
    cout << "NO";
}

    return 0;  
}  