#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++; 
            }
        }

        //first i was not able to figure out how to jump 2 steps. ahead..

        // {1,2} {3,4} ectc

    }

    cout << s << endl;
    return 0;
}
