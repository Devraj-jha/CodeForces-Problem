#include <iostream>
#include <vector>

// 2 3 4 1 => r b r b .. -> b r b r 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n,k; 
        cin >>n >> k; 

        vector<int> v(n);
           for(int i = 0; i < n; i++) {
        cin >> v[i];       
    } 
    bool iscon = false;

      for(int i = 0; i < n; i++) {
        if(k == v[i] ){
            iscon = true;
            break;
        }     
    }   
    if(iscon){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    }


    return 0;  
}  
