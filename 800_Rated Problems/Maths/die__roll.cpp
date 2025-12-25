#include <iostream>
#include <numeric> 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y,w; 
    cin >> y >> w; 

    int m = y;
    if(w > y){
        m = w;
    }
    int cn = 6 - m + 1; 
    
    
    int numerator = cn;
    int denominator = 6 ;
    int g = gcd(numerator,denominator);

    cout << numerator/g << "/" << denominator/g << endl;
    return 0;  
}  