#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mis = 0,cris = 0;

    
    while(n--){
        int a,b;
        cin >> a >> b;
        if( a > b){
            mis++ ;
        }else if(b > a){
            cris++;
        }
    }
if ( mis > cris){
    cout << "Mishka";
}else if(cris > mis){
    cout << "Chris";
}else {
    cout << "Friendship is magic!^^";
}

    return 0;  
}  
