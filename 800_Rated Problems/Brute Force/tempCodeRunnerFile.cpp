 #include <iostream>
#include <vector>

using namespace std; 
int main(){
    int n;
    cin >> n;

    vector<int> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }
    int max = v[0];
    int min = v[0];
    int cn = 0; 
    for(int i = 1; i < n; i++) {
        if(v[i] > max ){
            cn++;
            max = v[i];
        }     
        if(v[i] < min){
            cn++;
            min = v[i];
        }     
    }
    cout << cn;
}