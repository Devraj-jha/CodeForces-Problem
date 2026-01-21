#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        
      long long n;
      cin >> n; 
      long long sum = n * (n + 1)/2;

      long long power = 1; 
      long long powSum = 0; 

      while(power <= n ){
        powSum += power; 
        power *= 2;
      }
      sum -= 2 * powSum; 
      cout << sum << "\n";
    }

// ,1,2 ,4, 8
    return 0;  
}  
