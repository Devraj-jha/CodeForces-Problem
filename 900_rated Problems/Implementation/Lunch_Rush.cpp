#include <iostream>
#include <vector>
#include <utility>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k; 
    cin >> n >> k; 
    vector<pair<long long, long long>> restaurants(n);

    for (int i = 0; i < n; i++) {
        long long f, t;
        cin >> f >> t;
        restaurants[i] = {f, t};
    }

    long long max_joy = LLONG_MIN; // important for negative joys
    for (int i = 0; i < n; i++) {
        long long joy;
        if (restaurants[i].second > k) {
            joy = restaurants[i].first - (restaurants[i].second - k);
        } else {
            joy = restaurants[i].first;
        }
        max_joy = max(max_joy, joy);
    }

    cout << max_joy << "\n";

    return 0;
}
