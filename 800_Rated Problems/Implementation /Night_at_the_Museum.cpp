#include <iostream>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = 0; 
    int sn = 0;
    char p = 'a';
    for(int i = 0; i < s.length(); i++) {

       int d = abs(s[i] - p);
       sn += min(d, 26 - d);
       p = s[i];
        
    }
    cout << sn ;

    return 0;  
}
