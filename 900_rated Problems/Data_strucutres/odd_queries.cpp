#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n,q;
    cin >> n >> q;

    vector<int> v(n);
    vector<long long> pref(n + 1, 0);


    long long total_sum = 0; 
  for(int i = 0; i < n; i++) {
    cin >> v[i];   
    total_sum += v[i];    
    }

    for(long long i = 0; i <= n; i++){
        pref[i] = pref[i - 1] + v[i -1];

    }

    while(q--){
        long long l,r,k; 
        cin >> l >> r >> k;
        long long x ; 
        x = total_sum; 
        long long s = pref[r] - pref[l -1];
        x = x - s + k * (r - l + 1);

        if(x % 2 == 1){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
     
  }

    return 0;
 }

