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
    
    vector <int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    
    int cn = 0; 
    for(int i = 0; i < n -1 ; i++) {
        if(v[i] > v[i+1]){
            cn++; 

        }
        
        
    }  
    
    cout << cn << "\n";

    
  }
  // 3 2 1
    return 0;
 }

//a1 , a2 .. an 
// i, j. 
// a1 > aj
// aj removed
//4 2 1 