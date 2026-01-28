#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,b,d; 
    int cn = 0; 
    int total = 0; 
    cin >> n >> b >>d ; 
    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }
   /// if oranges > d overflow. if it is great > b = throws
    

   for(int i = 0; i < n ; i++){
        if(v[i]  <= b){
            total = total + v[i];
        }
        if(total > d){
            cn++;
            total = 0;
        }
   }
   cout << cn; 

    return 0;  
}  