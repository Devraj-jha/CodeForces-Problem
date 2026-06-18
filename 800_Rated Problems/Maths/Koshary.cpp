#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b; 
        cin >> a >> b;

        if(a == 1 && b == 1){
            cout << "NO\n";
            continue;

        }else if(a % 2 != 0 && b % 2!= 0){
            cout << "NO\n";
            continue;
        }else {
            cout << "YES\n";
        }
//a, b; 
// 
    }
    return 0;

}