#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s; 
    int j = 0; 
    string t = "hello";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == t[j]){
            ++j;
        }
        if(j == t.length()){
            break;
        }

    }
    if(j == t.length()){

        cout << "YES";
    }else {
        cout << "NO";
    }
    

//
    return 0;  
}  

//this problem is 2 pointers things. 
// for loop tracks one problem 
// j tracks other pointers