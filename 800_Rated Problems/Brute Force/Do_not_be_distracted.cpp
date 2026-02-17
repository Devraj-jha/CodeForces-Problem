#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        bool visited[26] = {false};
        visited[s[0] - 'A'] = true;
        
        bool suspicious = false;
        
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) {
                if(visited[s[i] - 'A']) {
                    suspicious = true;
                    break;
                }
                visited[s[i] - 'A'] = true;
            }
        }
        
        if(suspicious)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
    return 0;
}
