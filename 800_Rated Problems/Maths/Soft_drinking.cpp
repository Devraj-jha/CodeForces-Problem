#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_al = (k * l)/nl ; 
    int total_lime  = c * d; 
    int total_salt = p/ np ; 

    int totals = min({total_al, total_lime,total_salt})/n; 
    cout << totals; 


// n friends .
// k bottls 
// l -> mili litre of drink 
// c -> c limes
// d -> d slices 
//p -> p gram of salt 
//to make toast. 
// nl militire of drink 
// 
    return 0;  
}  
