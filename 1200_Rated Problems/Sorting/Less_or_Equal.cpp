#include <iostream>
#include <algorithm> 

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; 
    cin >> n >> k; 

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    int cn = 0; 
    int ans = -1; 

    sort(v.begin(), v.end());

    
    



    cout << ans << "\n"; 


    return 0;  
}  