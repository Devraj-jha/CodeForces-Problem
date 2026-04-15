#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        if (n < 2) {
            cout << "NO\n";
        }
        else if (sum % 2 != 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    
    return 0;
}