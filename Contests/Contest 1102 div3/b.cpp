#include <iostream>
using namespace std;
bool has(int n) {
    bool seen[10] = {};
    int count = 0;

    if (n == 0) return true;

    n = abs(n);

    while (n > 0) {
        int d = n % 10;
        if (!seen[d]) {
            seen[d] = true;
            count++;
            if (count > 2) return false;
        }
        n /= 10;
    }

    return true;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 
        if(has(n)){
           cout << 1 << "\n";

        }else {
            for(int i = 1; i < 99; i++){
                int ans = n * i; 
                if(has(ans)){
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
    return 0;

}