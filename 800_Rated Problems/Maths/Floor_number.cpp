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

        int  n , x;  
        cin >> n >> x; 

        if(n  <=  2){

            cout << 1 << endl; 
            continue;
        }
    
        int tem =   n  - 3; 
        int tem1 =  tem/x;  

        cout << tem1  + 2 << endl;

    }
    return 0;

}

// 7  /  3 = 2 . 1 ;
//  22/ 5 =>  4.1 something;

//  