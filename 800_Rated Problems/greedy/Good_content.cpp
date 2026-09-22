#include <iostream>
#include <algorithm>


using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n; 

        int a1,a2,a3;

        cin >> a1 >> a2 >> a3;

        cout << n - min(min(a1,a2),a3) << endl;


    }
    return 0;

}