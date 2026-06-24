#include <iostream>
#include <vector>
#include <set>


using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n;
    cin >> n;
    
    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    set<int> s(v.begin(), v.end());
    cout << s.size() << endl; 
  }

    return 0;
 }

