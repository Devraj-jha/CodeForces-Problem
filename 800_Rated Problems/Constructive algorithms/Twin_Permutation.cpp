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
    vector<int> ans;
     int tem = n + 1;
      for(int i = 0; i < n; i++) {
        // n +1  = ai + bi/

        int tem_ans = tem - v[i];
        ans.push_back(tem_ans);
    
      }
      for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
      }
      cout << "\n";
  }

// 1 2 4 5 3
//
    return 0;

 }

