#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aoyeuiAOYEUI";
    string result = "";

    for (char c : s) {
        // convert to lowercase
        c = tolower(c);

        // check if NOT vowel
        if (vowels.find(c) == string::npos) {
            result += ".";
            result += c;
        }
    }

    cout << result;
    return 0;
}