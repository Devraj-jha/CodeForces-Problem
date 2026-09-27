#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>

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
    long long ans = 0 ; 
    for(int i =0 ; i < n; i ++){
        if( v[i] >= 2){
            ans = ans + v[i];
        }
        
    }
    if(v[n - 1] == 1){
        ans = ans + 1;
    }
    cout << ans % 676767677<< "\n";
  }

    return 0;
 }