#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n, k;
		cin >> n >> k;
		int need = (k - 1) / (n - 1);
		cout << k + need << endl;

        // 1,2,3,4skip, 5,6,7,8skip,9,10,11,12skip,13,14,15,16skip.
        
    }
    	
    return 0;  
}  
