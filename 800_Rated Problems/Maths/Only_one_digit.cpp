#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string n; 
        cin >> n;
        char smallest = n[0];
        for(int i = 0; i < n.size(); i ++){

            if(n[i] < smallest ){
                smallest = n[i];
            }
        }
        cout << smallest << "\n";
    }
    return 0;

}