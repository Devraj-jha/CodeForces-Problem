#include <iostream> 

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;  
    double y = n;
    double sn = 0;

    while ( n > 0 ){
        double a;
        cin >> a;
        sn = sn + a;
        n--;
    }

    cout << sn/(y);
    
}