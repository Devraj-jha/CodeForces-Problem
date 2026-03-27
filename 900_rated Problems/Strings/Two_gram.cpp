
#include <iostream>
#include <unordered_map>
#include <vector> 

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unordered_map< string, int> freq; 
    int n; 
    cin >> n; 
    vector<string> v;

    string s; 
    cin >> s; 

    //divide the string, into parts and append them, into a array. 
    // count the freq. of the largest one..

    for(int i = 0; i <s.length() - 1; i++){
      v.push_back(s.substr(i,2));
    }

    for(string ss: v ){
        freq[ss]++; 
    }

    string best; 
    int maxFreq = 0; 

    for(auto [word, count] : freq){
        if(count > maxFreq){
            maxFreq = count; 
            best = word; 

        }
    }
    cout << best;
    return 0;  
}  