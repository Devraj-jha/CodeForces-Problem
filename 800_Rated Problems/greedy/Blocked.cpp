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

    sort(v.begin(), v.end(), greater<int> ());
    bool same = false;
     for(int i = 0; i < n - 1; i++) {
        if(v[i] == v[i + 1]){
            same = true;
        }
    }
    if(same){
        cout << -1 << endl; 
        continue;
    }
     for(int i = 0; i < n; i++) {
        cout  << v[i] << " ";
    }
    cout << endl; 
  }

    return 0;
 }