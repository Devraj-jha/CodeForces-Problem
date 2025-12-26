#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a < b && b < c){
            cout << "STAIR" << endl;
        }else if(b > c && b > a){
            cout << "PEAK" << endl;
        }else{
            cout << "NONE" << endl;
        }
    }


    return 0;  
}  
