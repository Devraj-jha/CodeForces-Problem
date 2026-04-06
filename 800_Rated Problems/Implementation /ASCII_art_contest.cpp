#include <iostream>
#include <set>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> ms;

    int a,b,c; 
    cin >> a >> b >> c; 
    ms.insert(a);
    ms.insert(b);
    ms.insert(c);
    
    if(*next(ms.begin(),2) - *ms.begin() >= 10){
        cout << "check again";

    }else {
        cout << "final "<< *next(ms.begin(), 1);
    }


    return 0;  
}  