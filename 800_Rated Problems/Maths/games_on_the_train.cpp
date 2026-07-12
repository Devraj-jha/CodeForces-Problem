#include <iostream>
#include <vector>
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

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    auto max = *max_element(v.begin(),v.end());
    
    auto min = *min_element(v.begin(),v.end());

    cout << max - min + 1 << "\n";
  }

    return 0;
 }
