#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 
int main(){
    int n,m;
    cin >> n >> m;
    int sum = 0;
    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }

    sort(v.begin(), v.end());
    for(int i = 0 ; i < m ; i++){
        if(v[i] < 0){
            sum = sum + abs(v[i]);
        }
    }
cout << sum; 

}