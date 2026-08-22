#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    
    while(t--){
    long long  n;
    cin >> n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    int xr = 0;
    for(int i = 0; i < n; i++) {
       xr^=v[i];
    } 

    if(n % 2 == 0){
        if(xr == 0){
            cout << 3 << "\n";
        }else {
            cout << -1 << "\n";
        }
    }else {
        cout << xr << "\n";
    }
  }

    return 0;
 }

// first we have a bi array jisme.. sab zero ho jate 

// and wo transormation x karta h.. 