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
       int a,b,c; 
       cin >> a >> b >> c; 
       
       int d = abs(a - b); 
       int moves = (d + 2*c - 1) / (2*c);
       cout << moves << "\n"; 

    }


    return 0;  
}  

// two vessels with water
//1st -> a gram
//2nd -> b gram
// 
// empty c gram
