#include <algorithm>
#include <vector>
#include <iostream>

using namespace std; 
int main(){
    int n;
    cin >> n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }

    int mx = *max_element(v.begin(), v.end());
 

    int cn  = 0; 
    for(int i = 0; i < n; i++) {
       int temp = mx - v[i];
        cn = cn + temp; 

    }
    cout << cn; 

}