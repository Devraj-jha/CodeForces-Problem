#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 

       string s,q; 
       cin >> s >> q; 

       sort(s.begin(), s.end());
       sort(q.begin(), q.end());

       if( q == s){
         cout << "yes\n";

       }else {
        cout << "no\n";
       }

    }
    return 0;

}