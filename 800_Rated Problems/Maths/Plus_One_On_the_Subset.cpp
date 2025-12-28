#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n,c;
        cin >> n; 
        vector < int> a(n); 
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int minVal = *min_element(a.begin(),a.end());
        int maxVal = *max_element(a.begin(), a.end());

        c = maxVal - minVal;
        cout << c << endl;
        

    }
    // take the array as an input. 
    // find the maximum. 
    // sub highest to the lowerest we get the answer.

    return 0;  
}  
