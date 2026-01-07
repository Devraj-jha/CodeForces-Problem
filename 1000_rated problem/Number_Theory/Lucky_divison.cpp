#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool is_Lucky = false; 

    for(int i = 0; i < 14; i++){
        if(n % lucky_numbers[i] == 0){
            is_Lucky = true; 
            break;
        }
        
    }
    if(is_Lucky){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;  
}  
