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

        if(n < 4 || n % 2 != 0){
            cout << -1 << endl; 
            continue;
        }

        long long max_bus = n / 4 ; 

         long long min_bus = n / 6;
        if(n % 6 != 0){
            min_bus++;
        }
       
        // 14 
        // 6 6 2;
        // 6 4 4 ; 
        if(n < 6){
            min_bus = 1;
        }
        cout << min_bus << " " << max_bus  << endl;
    }
    return 0;

}
// 16 6 6 4 // 14// 4 4 6 
// two types of bus. 
// two axles -> total 4 wheels. 
// three axels => 6 wheels.

//total number of tires. n ; 

// find the max and min number of bus. 

