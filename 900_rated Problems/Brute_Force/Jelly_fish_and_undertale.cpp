#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    long long  a , b , n;
    cin  >> a >> b >> n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    } 
    
    sort(v.begin(), v.end());
    long long t = 0;
    long long  i = 0 ;  
     while( b != 0){
        if( b == 1 && i != n){
            b = min(b + v[i], a); 
            i++;

        }
        t = t + b - 1;
        b = 1; 
        if(b == 1 && i == n){
            t = t + 1; 
            b = 0;
        }
     }
     cout << t << "\n";
  }

    return 0;
 }

//  b = bomb time 
// a = the int 
// tools are  if ( x + b > a ) == a new value 

//   we want maximization :)

// 