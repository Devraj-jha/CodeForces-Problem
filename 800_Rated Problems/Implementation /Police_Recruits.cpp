
#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cn = 0;
    int check = 0;
    vector<int> v(n);     

    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }

    for(int i = 0; i < n; i++) {
      
        if(v[i] == -1 && check == 0){
            cn = cn + 1;
        }else if(v[i] == -1 && check != 0){
            check = check - 1;
        } else if( v[i] > 0){
            check = check + v[i];
        }
    }



    
    cout << cn;
    
    return 0;  
}  
