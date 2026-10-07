#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool found = false;
        for(int i = 0; i + 2 < n; i++){
            if(a[i] < a[i+1] && a[i+1] > a[i+2]){
                cout << "YES\n";
                cout << i+1 << " " << i+2 << " " << i+3 << "\n";
                found = true;
                break;
            }
        }
        if(!found) cout << "NO\n";
    }
    return 0;
}