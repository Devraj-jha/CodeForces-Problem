#include <iostream>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
            string s;
cin >> s;

if ((s.back() - '0') % 2 == 0)
    cout << 0 << endl;
else {
    bool hasEven = false;
    for (char c : s)
        if ((c - '0') % 2 == 0)
            hasEven = true;

    if (!hasEven)
        cout << -1 << endl;
    else if ((s[0] - '0') % 2 == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}
    }


    return 0;  
}  
