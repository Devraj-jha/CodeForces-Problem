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
        vector <int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }       
        sort(v.begin(),v.end());
        int cn = 0; 
        int output;
        for(int i = 0; i < n - 1; i ++){
            if(v[i] == v[i + 1]){
                cn++;
                output = v[i];
                if(cn == 2){
                    break;
                }
            }else{
                cn = 0;
            }


        }
        if(cn >= 2){
            cout << output << "\n"; 
        }else {
            cout << -1  << "\n";
        }
    }


    return 0;  
}  
