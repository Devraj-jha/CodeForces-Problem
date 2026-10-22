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
    long long   sum =  0; 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    sum += v[i];
    }

    long long r =  sqrt(sum);

    if(r *  r ==  sum   ){

        cout <<  "YES\n";
    }else {
        cout << "NO\n";
    }

  }

    return 0;
 }

