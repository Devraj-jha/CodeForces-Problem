#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>   
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

    if(n == 1){
cout << 0 << "\n";
        continue;    

    }
   
    int ans = 0; 
    for(int i =1 ; i < n; i ++){

        ans = max(ans, v[i - 1] - v[i ]);


    }
int mn = *min_element(v.begin(), v.end());
int mx = *max_element(v.begin(), v.end());


int fir = mx - v[0];
int fir1 = v[n - 1] - mn;


cout << max(ans, max(fir,fir1)) << endl;

  }

    return 0;
 }

