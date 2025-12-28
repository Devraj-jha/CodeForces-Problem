#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int h,m,r; 
        cin >> h >> m;
        h = 23 - h; 
        m = 60 - m; 
        r = h*60 + m ;
        cout << r << endl;
    }


    return 0;  
}  
