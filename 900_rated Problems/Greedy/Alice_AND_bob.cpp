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
        int n;
        long long a;
        cin >> n >> a;

        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        int L = lower_bound(v.begin(), v.end(), a) - v.begin();
        int R = v.end() - upper_bound(v.begin(), v.end(), a);

        if(R > L)
            cout << a + 1 << "\n";
        else
            cout << a - 1 << "\n";
    }

    return 0;
}