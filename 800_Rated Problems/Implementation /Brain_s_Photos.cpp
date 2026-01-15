#include <iostream>
#include <vector>

using namespace std; 
int main(){
    int x,m;
    cin >> x >> m ;
    int n = x * m; 
    bool is_black = true; 
    vector<char> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }

    for(int i = 0; i < n; i++ ){
        if(v[i] == 'C' || v[i] == 'M' || v[i] == 'Y'|| v[i] == 'G'){
            is_black = false;
        }
    }
    if(is_black){
        cout << "#Black&White";
}else{
    cout << "#Color";
}
}