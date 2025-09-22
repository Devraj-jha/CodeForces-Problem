#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int s = 0, d = 0; 
    int left = 0, right = n - 1;

    for (int turn = 0; turn < n; turn++) {
        if (v[left] >= v[right]) {
            if (turn % 2 == 0) s += v[left];
            else d += v[left];
            left++;
        } else {
            if (turn % 2 == 0) s += v[right];
            else d += v[right];
            right--;
        }
    }

    cout << s << " " << d << "\n";
    return 0;
}
