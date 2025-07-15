#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // optional, improves performance

    int size;
    cin >> size;

    vector<int> v(size);
    vector<int> n(size);
    vector<int> output;

    // Input values into vectors
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < size; ++i) {
        cin >> n[i];
    }

    // Compare and generate output
    for (int i = 0; i < size; ++i) {
        if (v[i] == n[i]) {
            output.push_back(0);
        } else {
            output.push_back(1);
        }
    }

    // Output result
    for (int o : output) {
        cout << o << " ";
    }

    return 0;
}
