#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool rated = false;
    bool maybe = false;

    int prev = 1e9;

    while (n--) {
        int a, b;
        cin >> a >> b;

        if (a != b)
            rated = true;

        if (a > prev)
            maybe = true;

        prev = a;
    }

    if (rated)
        cout << "rated";
    else if (maybe)
        cout << "unrated";
    else
        cout << "maybe";

    return 0;
}