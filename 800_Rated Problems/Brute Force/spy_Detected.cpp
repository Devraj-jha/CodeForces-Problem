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
        vector<int> v(n);
         for(int i = 0; i < n; i++) {
        cin >> v[i];       
         } 
         int maj,diff;

         if(v[0] == v[1] || v[0] == v[2] ){
            maj = v[0];
         }else {
            maj = v[1];
         }

         for(int i = 0; i < n; i++){
            if(maj != v[i]){
                diff = i;
            }
         }
         cout << diff + 1 << "\n";
    }


    return 0;  
}  
