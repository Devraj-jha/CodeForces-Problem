#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n;
    cin >> n;

    vector<int> v(n);      
    for(long long i = 0; i < n; i++) {
        cin >> v[i];       
    } 
    
    vector<long long> ans(n);
    for (int i = 0; i < n; i++)
		{
			if (v[i] == 1)
				v[i]++; 
		}
    for(long long i = 0; i < n - 1; i++){

        
       while(v[i + 1] % v[i] == 0){
            v[i + 1]++;

       }
    }
    
    for(long long i = 0; i < n; i++){
        cout << v[i] << " ";
    }

cout << "\n";
  }

    return 0;
 }

// operations 
// n positive int => a1 to an; 
// any number add one?

// at most 2n operations are allowed.
// ai+1; 