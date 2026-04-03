#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int last_child = 0;
    int max_rounds = 0;

    for(int i = 0; i < n; i++) {
       
        int rounds = (v[i] + m - 1) / m;

        if(rounds >= max_rounds) {
            max_rounds = rounds;
            last_child = i + 1; // 1-indexed
        }
    }

    cout << last_child << endl;
}