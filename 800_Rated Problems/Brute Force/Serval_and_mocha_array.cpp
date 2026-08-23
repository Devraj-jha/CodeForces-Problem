
#include <iostream>
#include <vector>
#include <numeric>
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

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  

    bool ans = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(j != i){
                if(gcd(v[i],v[j]) <= 2){
                    cout << "YES\n";
                    ans = true;
                    break;
                }
            }
        }
        if(ans){
            break;
        }
    }
    if(!ans){
        cout << "NO\n";
    }
    
 }
 return 0;
}
/// we ahve to make the aray beatutiful

// condtions
// gcd of all <= lenghh


//sorting apporach failed 
// let's think something else :)

// 1261 227821 143 4171 1941
 // couldn't solve this :( 
 // gcd 14