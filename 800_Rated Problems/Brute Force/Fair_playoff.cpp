#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b,c,d;

        cin >> a >> b >> c >> d; 

        int ans = max(a,b);

        int mini = min(c , d);
        int ans1 = min(a,b);
        int mini2 = max(c,d );

        if(ans < mini || mini2 < ans1){
            cout << "NO\n";
        }else {
            cout << "YES\n";
        }

    }
    return 0;

}