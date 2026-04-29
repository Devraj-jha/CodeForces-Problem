#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        int digit = s[i] - '0';

        if (digit > 4) {
            if (i == 0 && digit == 9) continue;  
            digit = 9 - digit;
        }

        s[i] = digit + '0';
    }

    cout << s;
}
//