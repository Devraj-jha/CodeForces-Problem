#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 

        int cn = 0; 

        while( n % 3 != 0){
            cn++; 
            n++;
        }
        cout << cn << endl;

    }
    return 0;

}