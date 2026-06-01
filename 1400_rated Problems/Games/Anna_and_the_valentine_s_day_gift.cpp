#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<int> zeros;
        long long totalDigits = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            totalDigits += to_string(x).size();

            int cnt = 0;
            while (x % 10 == 0) {
                cnt++;
                x /= 10;
            }

            zeros.push_back(cnt);
        }

        sort(zeros.rbegin(), zeros.rend());

        long long removed = 0;

        for (int i = 0; i < n; i += 2) {
            removed += zeros[i];
        }

        long long finalDigits = totalDigits - removed;

        if (finalDigits > m)
            cout << "Sasha\n";
        else
            cout << "Anna\n";
    }

    return 0;
}