#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
     int t;
    cin >> t;
    
    while (t--) {
        long long r;
        cin >> r;
        
        long long d = 11;
        vector <long long> ans;
        while (r >= d) {
            if (r % d == 0)
                ans.push_back(r / d);
            d = (d - 1) * 10 + 1;
        }
        
        cout << (int)ans.size() << '\n';
        for (int i = (int)ans.size() - 1; i >= 0; --i)
            cout << ans[i] << ' ';
        cout << '\n';

}
 }
// 11 + 1100

//55 
// 
// 
//  44 + 4400
// n = 4400


//think baby think
// 999999999999999999
//999000999000999 +  -> 9 + 6 = 15
//90909090909090909

// 99009900990099 + 