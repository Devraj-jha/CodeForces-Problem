
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
    
    int neg = 0, zero = 0, pos = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }  


    
    int cn = 0;
    for (int x : v) {
        if (x == -1)
            neg++;
        else if (x == 0)
            zero++;
        else if (x == 1)
            pos++;
    }

    if(neg == 1){
        cn = 2;
    } else if(neg % 2 != 0){
        cn = 2; 
    }
    cn = cn + zero;

    cout << cn << "\n";

  }

    return 0;
 }

