#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int sw = 0;
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] != s[i + 1]) sw++;
        }

        int ans;
        if (sw == 1) {
            ans = 2;
        } else {
            ans = 1;
        }

        cout << ans << "\n";
    }
    return 0;

    //devraj jha... 
}