//k and dragons have streght rep => int 
// duel outcome => streght 
// k => s (streght)
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,n; 
    cin >> s >> n; 
    bool win = true;
    vector <pair<int,int>> dragons(n);

   for(int i = 0; i < n; i++ ){
        cin >> dragons[i].first >> dragons[i].second;
    } 

    sort(dragons.begin(), dragons.end());


    for(int i = 0; i < n; i++ ){
        
        if(s > dragons[i].first){
            s = s + dragons[i].second;
        
        }else {
            win = false;
            break;
        }

    }
    if(win){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;  
}  