#include <set>
#include <iostream>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        int k = s.size();

        while (s.count(k)) {
            k++;
        }

        cout << k << "\n";
    }

    return 0;
}