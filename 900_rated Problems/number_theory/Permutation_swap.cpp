#include <iostream>
#include <vector>
#include <numeric>
#include<algorithm>
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
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    }  
    int k = abs(v[0] - 1); 
    // k is our divison -> 3 - 1 = > 2 ; 
    // 
    for(int i= 1; i < n; i++){
        k = gcd(k, abs(v[i] - (i + 1)));


    }
    cout << k << endl; 
    // you are given an unsorted permutaion.w
  }

    return 0;
 }

// what is permutation 
//  1 to n. in any order
// goal/
// arrray is given. 

// ok so moves doesn't matter. 
// the value of k does. 
// I couldn't really think of the solution. 
// 

// never though of doing a gcd stuff. 
// even reading the solution i don't understnad. 

// h1 => 
// i coun't solve it because. i was thinking . 
//t o find some pattern. 
// i didn't though about mapping the array to eadch over. 


