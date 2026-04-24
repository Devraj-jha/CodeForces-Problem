#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; 
    cin >> n >> m; 
    int cn = 0; 
  
    for(int a = 0; a < 100; a++){
        for(int b = 0; b < 100; b++){
            if((a * a + b == n) && (a + b * b == m)){
                cn++;
            }
        }
    }
    cout << cn ;

    return 0;  
}  
