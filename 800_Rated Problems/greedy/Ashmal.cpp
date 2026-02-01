#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n; 
    cin >> n;
    

    vector<string> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }
    sort(v.begin(), v.end());
    string result;
for (const string& s : v) {
    result += s;
}
    cout << result << "\n";

    }


    return 0;  
}  
