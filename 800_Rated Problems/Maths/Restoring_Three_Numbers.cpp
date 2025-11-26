#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   vector <long long> x(4);

   for ( int i = 0; i < 4; i++){
    cin >> x[i];
   }

   sort(x.begin(), x.end());
   long long S = x[3]; 

   

    long long a = S - x[2];
    long long b = S - x[1];
    long long c = S - x[0];

    cout << a << " " << b << " " << c << endl;


    return 0;  
}  
 //we are given 4 no. 
 // we have to print a,b,c such that a+b, b+c , C + a , a + b + c = different numbers... 
  

