#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k; 
    cin >> n  >> m >> k; 

    if(m - n >=0 && k - n>= 0){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;  
}  