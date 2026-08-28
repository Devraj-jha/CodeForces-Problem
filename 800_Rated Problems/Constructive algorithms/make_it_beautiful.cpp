#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n;
    cin >> n;

    vector<int> v(n);  
        bool allsame = true;

        cin >> v[0];
        for (int i = 1; i < n; i++) {
    cin >> v[i];

    if (v[i] != v[i - 1]) {
        allsame = false;
    }
}

if(allsame){
    cout << "no\n";
    continue;
}
cout << "YES\n";
cout << v[n - 1] << " ";

for(int i = 0 ; i < n - 1; i ++){
    cout << v[i] << " ";
}

cout << endl;
    
 }
 return 0;
}
// why I am unable to solve this /// 

//. overwhelemd think 

//  current = sum of previous.2. 

/// we can arange them 
// i cna't just simply sort these things...


// 3 3 6 6 
// 3 6 3 6  

// 6 3 6 3 // this would work as we ll 