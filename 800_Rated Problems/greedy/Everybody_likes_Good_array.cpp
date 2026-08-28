#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n;
    cin >> n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  

    int cn = 0;
    for(int i = 0 ; i < n -1 ; i ++){
        if(v[i]  % 2 == v[i + 1] % 2){
            cn ++;
        }
    }
    cout << cn << endl;
  }

    return 0;
 }

