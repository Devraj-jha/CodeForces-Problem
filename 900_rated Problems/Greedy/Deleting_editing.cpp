#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){

        string s , t; 
        cin >> s >> t; 


        vector<int> cs(26,0), ct(26,0);

        for(char c:s ){
            cs[c - 'A']++;
        }

        for(char c : t){
            ct[c - 'A']++;

        }


        bool possible = true; 

        for(int i = 0 ; i < 26; i ++){

            if(ct[i] > cs[i]){
                possible = false;
                break;
            }
        }

        if(!possible){
            cout << "NO" << endl; 
            continue;
        }

        vector<int> toRem(26);

        for(int i = 0 ; i < 26; i ++){
            toRem[i] = cs[i] - ct[i];
        }


        string res = "";

        for(char c : s) {

            int ix = c - 'A';

            if(toRem[ix] > 0){

                toRem[ix]--;
            }else {

                res += c;
            }

           
        }
         if(res == t){
                cout << "YES\n" ; 
            }else {
                cout << "No\n";
            }

    }
    return 0;

}

// picks a word 
// E -> delete first occurrence
// 

// problem. is that.. 
// TRME //


// HOW CAN i solve it..

// first thing I. can do is?

