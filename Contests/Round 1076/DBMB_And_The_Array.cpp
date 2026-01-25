#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
            int sum = 0;

                int n,s,x; 
                cin >> n >> s >> x;

             vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }

        for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    while(sum != s){

        sum = sum + x;
        if(sum > s){
            break; 
        }
    }
    if( sum == s){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }


    }


    return 0;  
}  
