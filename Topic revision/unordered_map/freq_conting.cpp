
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s; 
    unordered_map< char, int> freq; 
    for (char ch : s){
        freq[ch]++; 


    }

for( auto [ch, count] : freq){
    cout << ch << " " << count  << endl ;

}

    return 0;  
}  