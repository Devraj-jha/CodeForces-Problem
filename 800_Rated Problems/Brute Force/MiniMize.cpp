#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int a,b; 
        
        cin >> a>> b;
        int min =10000000;

        for(int i = a;  i<=b ; i ++){
            int curr = (i - a) + (b - i);
            if(curr < min){
                min = curr;
            }
        }
        cout << min <<endl;
    }


    return 0;  
}  
