#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; 
    cin >> a >> b; 
    
    
    int fas = min(a,b);
    int maxx = max(a,b);
    int rest = (maxx - fas)/2;

    cout << fas << " " << rest; 

    return 0;  
}  