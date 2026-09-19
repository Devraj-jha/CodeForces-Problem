#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main(){
    int m,n;
    cin >> m >>n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    int mini = INT_MAX;
    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i + m - 1 < n; i++){
        int val = v[i] - v[i + m - 1 ];
        mini = min(mini, val);

    }
    cout << mini << endl;
}
// 10 12 10 7; 

// 10 10 7 5 ; 
// n - m ; 
// 6 - 4 == 2; 


// 22 12 10 10 7 5 

// 