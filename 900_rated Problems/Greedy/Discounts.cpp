#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std; 
int main(){
   int n;
cin >> n;

vector<long long> v(n);

for(int i = 0; i < n; i++)
    cin >> v[i];

sort(v.begin(), v.end(), greater<long long>());

long long sum = accumulate(v.begin(), v.end(), 0LL);

int m;
cin >> m;

while(m--) {
    int q;
    cin >> q;
    cout << sum - v[q - 1] << '\n';
}
}

//n bars,
// ith -> ai. 
// 1st -> v[i]
// all of them 

//m 
//ith -> qi cholate bars
// 

// 1 6 7
// 