// ring road
// n houses built along the ring road.
// 1 --> n ; 
// moves to house no.1 -> m things to do. 
//ith task to complete -> ai -> complete all the task with no. less than 1/
//find the time she needs to one along the rinraod takes one unit of time

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    long long cn = 0;   // total time
    int cur = 1;        // current house

    for (int i = 0; i < m; i++) {
        if (v[i] >= cur) {
            cn += v[i] - cur;
        } else {
            cn += (n - cur) + v[i];
        }
        cur = v[i];
    }

    cout << cn;
    return 0;
}
