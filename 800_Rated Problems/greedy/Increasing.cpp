#include <iostream>
#include <set>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 
        set <int > s; 
        for(int i = 0; i < n; i++ ){
            int x; 
             cin >> x; 
             s.insert(x); 
        }
        if(s.size() == n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }


    return 0;  
}  
