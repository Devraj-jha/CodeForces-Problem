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
        int last = n % 10; 
        int first = n / 10 ; 

        cout << first + last << endl ; 
    }


    return 0;  
}  
