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
    sort(v.begin(), v.end());
    int cn = 0; 
    for(int i = 1; i < n; i++){
        cn = cn + v[i] - v[0];

    }
    cout << cn << "\n";
    
    }


    return 0;  
}  
