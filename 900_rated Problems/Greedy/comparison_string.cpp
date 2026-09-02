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

    vector<char> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  

    int count = 1; 
    int ans = 1; 
    for(int i = 0; i < n -1 ; i++) {
        if(v[i] == v[i + 1]){
            count++;
            
        } else {
            ans = max ( count, ans);
            count = 1; 
        }    
        
    }
    ans = max(count, ans);
    cout << ans + 1 << endl;
  }

    return 0;
 }

 // <<>> 

 //  6 elements 
 // 
 // << >> 
 // 1 2 10 1 2 ><>>><<>

