#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if(s.size() == 1){
            cout << 1 << endl;
            continue;
        }
        int count_0 = 0; 
        int count_1 = 0; 

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                count_0++;
            }else {
                count_1++;
            }
        }
        int leng = 0;
        if(count_0 == count_1){
            cout << 0 << endl;
            continue;
        }

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '0' && count_1 > 0){
                count_1--; 
                leng++;
            }else if(s[i] == '1' && count_0 > 0 ){
                count_0--;
                leng++;
            }else {
                break;
            }
        }
        cout << s.size() - leng << endl;
    }

    return 0;
}

// 0 delte 
// 0 1 1 
// 1 0 1
// 0 1 0 1 1 1 0 0 0 1 

// 1 1 1 1 0 0 
// 1 1 1 1 00 
// 1 1 0 0 
// 