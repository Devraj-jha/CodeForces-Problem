#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 
int main(){
    int n;
    cin >> n;

    vector<int> v1,v2,v3;
    for(int i = 1;  i <= n; i ++){
        int t; 
        cin >> t; 

        if(t == 1) v1.push_back(i);
        else if(t == 2) v2.push_back(i);
        else v3.push_back(i);

    }

    int w = min({v1.size(), v2.size(), v3.size()});
    cout << w << endl;

    for (int i = 0; i < w; i++) {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }

    return 0;
}
    // sort them
    // 1 1 2 2 3 3.. somehin
    //
