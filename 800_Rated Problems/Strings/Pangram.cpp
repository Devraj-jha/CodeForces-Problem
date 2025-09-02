#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set <char> s;

    int n;
    cin >> n;
    for ( int i = 0; i < n; i ++){
        char c;
        cin >> c;
        c = tolower(c);
        s.insert(c);
    }

       
    
    if ( s.size() == 26){
        cout <<"YES";
    } else {
        cout <<"NO";
    }
   



    return 0;  
}
