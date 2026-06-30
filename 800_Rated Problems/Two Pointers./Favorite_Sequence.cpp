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
        vector<int> ans; 


        for(int i = 0; i < v.size(); i++){
            cin >> v[i];

        }

        int l = 0; 
        int r = n - 1;


        for(int i = 0; i < v.size(); i++){
            if(i % 2 == 0){
                  ans.push_back(v[l]);
                  l++;
            }else {
                ans.push_back(v[r]);
                r--;
            }
          
            
        }

    for(int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    }
    return 0;

}