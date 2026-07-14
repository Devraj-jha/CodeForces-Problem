#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    int cn = 0;

    if(n % 2 == 0){
        int tem = n; 
        cn = tem / 2; 
        cout << cn << endl; 
        while( n > 0){
            cout << 2 << " ";
            n -= 2;
        }

    }else {
         int tem = n; 
         tem = tem - 3;
         cn = tem/ 2 + 1;
         cout << cn << endl;
         cout << 3 << " ";
         n = n - 3;
         while(n > 0){
            cout << 2 << " ";
            n -= 2;
         }
    }
   

    return 0;  
}  