#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; 
    cin >> n;

    string s; 
    cin >> s; 

    string t = "";
    int cn = 2;

    if(s.size() % 2 != 0){
        cn = 1;
    }
    for(int i = 0 ; i < s.size(); i++){
      if(cn % 2 != 0){
        t += s[i];
      }else {
        t = s[i] + t;
      }
      cn++;
    }
// odd -> end begin end begin end...

// begin -> end -> begin and ...
cout << t << endl;
    return 0;
}



/// s.empty -> checks if a stirng is empty. 

// s.push_back() // adds a character to end

// s.append() -> adsa a string to end

// s = s[i] + s; a chatacter to front
// s.erase(i , 1) -> remvoes characters.