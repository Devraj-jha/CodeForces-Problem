#include <iostream>
#include <string> 
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
      string s; 
      cin >> s; 
      
      string t = "Timur";
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());

      if(s == t) cout << "YES" <<endl;
      else cout << "NO" <<endl;
    }
    return 0;  
}  
