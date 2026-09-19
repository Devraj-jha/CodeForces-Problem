#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){

        int n; 
        cin >> n; 
        bool same = true;
        string v1; 
        string v2; 
        cin >> v1; 
        cin >> v2;

        for(int i = 0; i < n; i++ ){
            if(v1[i] == 'R' || v2[i] == 'R'){
                if(v1[i] != v2[i]){
                    same = false;
                }
            }
        }

        if(same){
            cout << "yes\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;

}

// G and b are same !!
