#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n;
    cin >> n;
    map<int, int> a;
    long long res = 0;
    for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    x -= i;
    res += a[x];
    a[x]++;
  }
  cout << res << "\n";
     // n = 4;
     // i = 0; 
     // j = 0 1 2 3; if i < j; 
     // i = 1; 
     // we can skip 0;
    }
}




//array a => n intergers
// (i, j) pairs 
// i < j; 
// aj - ai = j - i ; 
