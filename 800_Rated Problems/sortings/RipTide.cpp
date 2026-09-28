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
   

    std::vector<int> v(3);
    for(int i = 0; i < 3 ; i++) {
        cin >> v[i];
    }

    
    sort(v.begin(), v.end());
    cout << min(v[2] - v[1], v[1] - v[0]) << endl;

  }

    return 0;
 }