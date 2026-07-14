//n boxes
// ai => written on it.
//non decreasing order.
// subarray -> at most k 
//
//1 => n
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

     if(is_sorted(v.begin(),v.end()) && k >= 1){
        cout << "YES\n";
        continue;
     }else if(k >= 2){
        cout << "YES\n";
     }else {
        cout << "NO\n";
     }


    }


    return 0;  
}  

