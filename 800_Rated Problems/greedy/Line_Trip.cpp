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
        int n,x;
        cin >> n;
        cin >> x;
        vector<int> v(n);      
     for(int i = 0; i < n; i++) {
        cin >> v[i];       
      } 
    
      int max_gap = v[0];

        for(int i = 1; i < n; i++){
            max_gap = max(max_gap,v[i] - v[i -1]);


        }

        int last = x - v[n - 1];
        max_gap = max(max_gap, 2 * last);

        cout << max_gap << "\n";
      }

    


    return 0;  
}  
