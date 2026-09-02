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
    int n,k;
    cin >> n >> k;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  

    sort(v.begin(), v.end());
    int ans  = 0;
    int gap = 0;
    for(int i = 0; i < n - 1; i++){
       if(v[i + 1] - v[i] <= k){
        gap++; // 1  4 - 2 = 2 <=1 ; // 0 1

       } 
       ans = max(gap, ans); // 1, 

       if(v[i + 1] - v[i] > k){
        gap = 0;
       }
      
    }
    cout <<  n - (ans + 1)  << endl;
  }

    return 0;
 }

/// 17 3 1 20 12 5 17 12 
//1 3 5 12 12 17 17 20 

// 8 3 1 4 5 10 7 3
//