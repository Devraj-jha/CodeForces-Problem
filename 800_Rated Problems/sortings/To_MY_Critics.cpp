#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int arr[3]; 
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        if(arr[1] + arr[2] >= 10){
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }

    }


    return 0;  
}  
