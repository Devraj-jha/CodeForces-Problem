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
        int max = a, min = b; 
        if(b > a){
            max = b; 
            min = a; 
        }
        cout << min << " " << max << endl;
    }


    return 0;  
}  
