#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; 
    cin >> n;

    string s; 
    cin >> s; 

    string ans = "";

    while(!s.empty()){
            int nn = s.size();

           if( nn % 2 != 0){
            
            // 5 = 5 / 2 = 2 + 1;
            int x = nn/ 2;
            ans.push_back(s[x]);
            s.erase(x, 1);
        }else {
            int y = nn/2 ;
            ans.push_back(s[y]);

            s.erase(y,1);
        }
    }
cout << ans << endl;
    return 0;
}

