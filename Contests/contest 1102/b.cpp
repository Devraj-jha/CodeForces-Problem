#include <iostream>
using namespace std;


bool isPalindrome(int num) {
    if (num < 0) return false;

    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        long long ans1 = 0; 
        long long ans2 = -1;
        bool found = false; 

        long long n; 
        cin >> n; 
        for (long long a = 0; a <= n; a++) {
            if (!isPalindrome(a))
                continue;

            long long b = n - a;

            if (b % 12 == 0) {
                found = true; 
                ans1 = a;
                ans2 = b;
                break;
            }

        }
        if(found){
            cout << ans1 << " " << ans2 << "\n";
        }else {
            cout << -1 << "\n";
        }
    

    }
    return 0;

}