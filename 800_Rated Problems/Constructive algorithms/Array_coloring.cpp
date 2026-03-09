#include <iostream>
#include <vector>

// 2 3 4 1 => r b r b .. -> b r b r 
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> pos(n + 1);

        for(int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            pos[x] = i;
        }

        bool ok = true;

        for(int i = 1; i < n; i++) {
            if(pos[i] % 2 == pos[i+1] % 2) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
