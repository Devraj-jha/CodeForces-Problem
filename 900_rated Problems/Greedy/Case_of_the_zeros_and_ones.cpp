#include <iostream>
#include <cstdlib>  
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    string s; 
    cin >> s; 

    int cn_0 = 0, cn_1 = 0;

    for(int i = 0; i <n; i++){

        if(s[i] == '0'){
            cn_0++;
        }else{
            cn_1++;
        }
    }
    cout << abs(cn_0 -cn_1) << endl;

    
    return 0;  
}  