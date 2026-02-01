#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; 
    cin >> n >> k; 

    int total = 240; 
    int left = 240 - k; // 18
    int prob_time = 0;
    int cn = 0;
    for(int i = 1; i <= n; i ++){
        prob_time = prob_time + 5 * i;
        if(prob_time > left){
            
            break;
        }
        cn++;
    }
cout << cn  ;


    return 0;  
}  