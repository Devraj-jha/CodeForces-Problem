#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int inversion_parity(const vector<int>& arr) {
    int parity = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) parity ^= 1;
        }
    }
    return parity;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q; cin >> q;
    while (q--) {
        int n; 
        string s, t;
        cin >> n >> s >> t;

        vector<int> freq_s(26, 0), freq_t(26, 0);
        for (char c : s) freq_s[c - 'a']++;
        for (char c : t) freq_t[c - 'a']++;

        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (freq_s[i] != freq_t[i]) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << "NO\n";
            continue;
        }

        bool has_duplicate = false;
        for (int i = 0; i < 26; i++) {
            if (freq_s[i] > 1) {
                has_duplicate = true;
                break;
            }
        }
        if (has_duplicate) {
            cout << "YES\n";
            continue;
        }

        // All characters distinct, check parity by counting inversions directly

        // Map characters of s and t to their positions in sorted order
        vector<pair<char, int>> vs(n), vt(n);
        for (int i = 0; i < n; i++) {
            vs[i] = {s[i], i};
            vt[i] = {t[i], i};
        }
        sort(vs.begin(), vs.end());
        sort(vt.begin(), vt.end());

        vector<int> p_s(n), p_t(n);
        for (int i = 0; i < n; i++) {
            p_s[vs[i].second] = i;
            p_t[vt[i].second] = i;
        }

        int parity_s = inversion_parity(p_s);
        int parity_t = inversion_parity(p_t);

        if (parity_s == parity_t) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }

    return 0;
}
