#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k; 
    int cn = 0;

    cin >> n >> k; 
    long long odd_count = (n + 1)/ 2; 

    if(k <= odd_count){
        cout << 2 * k -1;

    }else {
        cout << 2 * (k - odd_count);
    }
    return 0;  
}  