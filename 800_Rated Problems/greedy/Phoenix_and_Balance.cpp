#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
          int n ; 
          cin >> n; 
        int half = n/2; 
        long long pile1 = 0, pile2 = 0; 

        pile1 += pow(2,n);
        for(int i = 1; i < half; i++){
            pile1 += pow(2,i);
        }
           for (int i = half; i < n; i++) {
            pile2 += pow(2, i);
        }

        cout << abs(pile1 - pile2) << '\n';

    }
// 4 coins
// 2 4 8 16
// 6
// 2 4 6 8 16 32
// 32 2 4 -> 
    return 0;  
}  
// is it a waste of TIme... ??????? ###