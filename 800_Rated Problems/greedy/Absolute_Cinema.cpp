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
    int sum = 0;
    vector<int> a(n);      
    for(int i = 0; i < n; i++) {
        cin >> a[i];       
    }  
     vector<int> b(n);      
    for(int i = 0; i < n; i++) {
        cin >> b[i];       
    }  
    for(int i = 0; i < n; i++) {
            if(a[i] > b[i]){
                swap(a[i],b[i]);

            }

    }  
    auto max = *max_element(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        sum = sum + b[i];
    }

    sum = sum + max;
    cout << sum << "\n";
  }

    return 0;
 }

