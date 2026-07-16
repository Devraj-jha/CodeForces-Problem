#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;

        if (n % 2 == 0) {
            
            for (int i = 1; i <= n; i += 2) {
                ans.push_back(i);
                ans.push_back(i + 1);
                ans.push_back(i + 1);
                ans.push_back(i);

                ans.push_back(i + 1);
                ans.push_back(i);

                ans.push_back(i);
                ans.push_back(i + 1);
            }
        } else {
          
            int base[] = {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3};

            for (int x : base)
                ans.push_back(x);

    
            for (int i = 4; i <= n; i += 2) {
                ans.push_back(i);
                ans.push_back(i + 1);
                ans.push_back(i + 1);
                ans.push_back(i);

                ans.push_back(i + 1);
                ans.push_back(i);

                ans.push_back(i);
                ans.push_back(i + 1);
            }
        }

        for (int x : ans)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}