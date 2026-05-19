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
    
    sort(v.begin(), v.end(), greater<int>());

    if(n == 1){
        cout << v[0] << "\n"; 
    }else {

        cout << (v[0])<< "\n";

    }
    

  }

    return 0;
 }

