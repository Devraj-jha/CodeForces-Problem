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
   string s;
        cin >> s;
        int n = s.size();

        int count4 = 0;
        string t = "";
        for (char c : s) {
            if (c == '4') count4++;
            else t += c;
        }

        int m = t.size();
        vector<int> pref2(m + 1, 0), suf13(m + 1, 0);

        for (int i = 0; i < m; i++) {
            pref2[i + 1] = pref2[i] + (t[i] == '2');
        }
        for (int i = m - 1; i >= 0; i--) {
            suf13[i] = suf13[i + 1] + (t[i] == '1' || t[i] == '3');
        }

        int best = 0;
        for (int i = 0; i <= m; i++) {
            best = max(best, pref2[i] + suf13[i]);
        }

        int ans = count4 + (m - best);
        cout << ans << "\n";
    }
    return 0;

}


// 12 , 32,