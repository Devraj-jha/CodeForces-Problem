#include <iostream>
#include <set> 

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; 
    cin >> n; 

    set< int> possible; 


    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;

        set<int> current;
        for (int j = 0; j < r; j++) {
            int x;
            cin >> x;
            current.insert(x);
        }

        if (i == 0) {
            possible = current; 
        } else {
            set<int> temp;
            set_intersection(
                possible.begin(), possible.end(),
                current.begin(), current.end(),
                inserter(temp, temp.begin())
            );
            possible = temp;
        }
    }

    for (int x : possible) {
        cout << x << " ";
    }

    return 0;
}