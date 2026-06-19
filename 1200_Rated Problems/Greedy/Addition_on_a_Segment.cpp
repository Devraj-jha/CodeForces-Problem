#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long sum = 0;
        int nonZero = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x > 0) nonZero++;
        }
        
        cout << min((long long)nonZero, sum - n + 1) << "\n";
    }
    
    return 0;
}
// n zeros. two integers l and r. 
// assign ai = ai + 1; 
//l and r all intergers become +1

// b array 
// n intgers 
// l and r values.
// l and r are indexes.
//uske bicche ke sarri values ko +1.
/// like we have to subtract i asusme. 
//
