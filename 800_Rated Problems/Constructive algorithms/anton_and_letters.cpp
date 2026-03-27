#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    string ss ; 
    getline(cin ,ss); 
    for(char ch: ss){
        if(isalpha(ch)){
            s.insert(ch);

        }

    }
   cout << s.size();

    return 0;
}