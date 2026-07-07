#include <iostream>
#include <cmath>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    int diff = 0;
    string s = to_string(n);

    int f = s[0] - '0';
    int p = (s.size() - 1);
    int ans = (f + 1) *   pow(10,p);

     diff = ans - n;
    cout << diff << "\n";
    return 0;  
}  

//one thing is that. we keep dividng 
// x by 10.. and 10.. until