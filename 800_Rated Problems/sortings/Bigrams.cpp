#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n;
    cin >> n;
        int cn1 = 0; 
        int cn2 = 0;
        int cn0 = 0;
    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    } 
       for(int i = 0; i < n; i++) {
             if(v[i] == 1){
                cn1++;
             }else if(v[i] == 2){
                cn2++;
             }else {
                cn0++;
             }
    } 
    
    if(cn0 > 0){
        cout << "YES\n";
    }else if(cn2 >= 2){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }


  }

    return 0;
 }

// c1 -> letter a
// c2 -> with b
// bk 
//aa bb 

// a b  c c  d . 
// a a c c  