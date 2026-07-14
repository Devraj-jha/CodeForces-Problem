#include <iostream>
#include <vector>
#include <algorithm>

#include <numeric>
#include <execution>
using namespace std; 
int main(){
    int n,cn = 0;
    cin >> n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }
    sort(v.rbegin(), v.rend());
   
    int sum = std::reduce(v.begin(), v.end(), 0);
    int t1 = 0; 
    int t2 = sum; 
    for(int i = 0; i < n; i ++  ){
        cn ++; 
        t1 = t1 + v[0];
        t2 = t2 - t1; 
        if(t1 > t2){
            break;
        }
    }
    cout << cn;
}
// x = x + v[i];