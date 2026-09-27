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

        vector<string> grid(8);

        string s = "";
        for(int i =0 ; i < 8; i++){
            cin >> grid[i];

        
        }

        for(int i = 0; i < 8; i ++){
            for(int j = 0; j < 8; j++){
                if(grid[i][j]  != '.'){
                    s.push_back(grid[i][j]);

                }
            }
        }

        
        cout << s << "\n";
    }
    return 0;

}