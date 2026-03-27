#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    vector<string> v(n);
    for(int i = 0; i < n; i++){
       cin >> v[i];
       
    }
    unordered_map<string,int> freq; 

    for( string s : v ){
        freq[s]++;
    }

    string maxStr; 
    int maxfreq = 0; 

    for(auto it : freq){
        if(it.second > maxfreq){
            maxfreq = it.second;
            maxStr = it.first; 

        }

    }
    cout << maxStr << endl; 
    return 0;  
}  
//n lines. 
// every line => one gaal
//