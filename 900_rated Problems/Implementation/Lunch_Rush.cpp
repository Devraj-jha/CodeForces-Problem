#include <iostream>
#include <utility>
#include <vector>


using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  n,k; 
    cin >> n >> k; 
    vector<pair<long long, long long > > restaurants(n);


    for (int i = 0; i < n; i++) {
    long long f, t;
    cin >> f >> t;                // read fi and ti
    restaurants[i] = {f, t};      // assign them to the pair
}
    long long  max_joy = 0; 
    long long  joy = 0; 
for(int i = 0; i < n; i ++){
    if(restaurants[i].second > k){
        joy = restaurants[i].first - (restaurants[i].second - k);
        
    }else{
        joy = restaurants[i].first; 

    }
   max_joy =  max(max_joy,joy);
}
cout << max_joy << "\n";
    
}