#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Minimum moves (ceil of n/2)
    int k = (n + 1) / 2;

    // Find smallest k divisible by m
    while (k % m != 0) {
        k++;
    }

    // Check if valid
    if (k > n) {
        cout << -1 << endl;
    } else {
        cout << k << endl;
    }

    return 0;
}