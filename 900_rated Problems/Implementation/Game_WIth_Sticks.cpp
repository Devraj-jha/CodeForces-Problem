#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; 
    cin >> n >> m; 

    if(min(n,m) % 2 == 0){
        cout <<"Malvika\n";
    }else {
        cout << "Akkshat\n";
    }

    return 0;  
}  