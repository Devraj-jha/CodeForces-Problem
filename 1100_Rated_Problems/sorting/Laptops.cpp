#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

       int n;
        cin >> n;

    vector<pair<int, int>> laptops(n);

    for (int i = 0; i < n; i++) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end());

    for (int i = 1; i < n; i++) {
        if (laptops[i].second < laptops[i - 1].second) {
            cout << "Happy Alex\n";
            return 0;
        }
    }

    cout << "Poor Alex\n";

    return 0;

}