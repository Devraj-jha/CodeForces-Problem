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

    vector<int> v1(n);  
    vector<int> v2(n);  

    for(int i = 0; i < n; i++) {
        cin >> v1[i];       
    }  
        for(int i = 0; i < n; i++) {
        cin >> v2[i];       
    }  
    int ans = 1;
    for(int i = 0; i < n; i++){
        if(v1[i] > v2[i]){
            ans+= v1[i] - v2[i];
        }
    }
    cout << ans << endl;
  }

    return 0;
 }

// 