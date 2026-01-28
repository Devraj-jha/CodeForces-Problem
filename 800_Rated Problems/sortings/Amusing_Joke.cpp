#include <iostream>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string g,h,p; 
    cin >> g >> h >> p;

    string Total  = g + h; 
    sort(Total.begin(), Total.end());
    sort(p.begin(), p.end());

    if(Total == p){
        cout << "YES";
    }else{
        cout << "NO";
    }
    

    return 0;  
}  