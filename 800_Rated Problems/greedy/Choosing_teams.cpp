#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; 
    cin >> n >> k; 
    int total_team = 0;
    int cn = 0;
    while(n > 0){
        int x; 
        cin >> x;
        if(5 - x >= k ){
            cn ++;
            if(cn == 3){
                total_team++;
                cn = 0;
            }
        }
        n--;
    }
    
    cout << total_team;
    return 0;  
}  