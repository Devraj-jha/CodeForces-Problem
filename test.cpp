
#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";

    for (int i = n - 1; i >= 0; i--) {
        int pos = ans.size() / 2;   
        ans.insert(ans.begin() + pos, s[i]);
    }

    cout << ans << "\n";
    return 0;
}

// 0 1 2 3 4 5 

// 0 0 1 1 2 
// 4 times number appear. 
//  1 1 1 2 1 3 1 4 

//pxi - px 1 
// centre left right left right
// n/2 + 1/ n/2 - 1 n/2 + 1
// n/3 

// test hook
