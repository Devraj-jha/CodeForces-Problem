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

            int a,b; 
            cin >> a >> b; 


            if(  b > a ){
                cout << -1 << endl;

            }else {
                 cout << min(b, a - b) << endl; 
            }

            
    }
    return 0;

}