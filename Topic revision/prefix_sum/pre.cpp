#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int n; 
    cin >> n; 

    vector <int > v(n);
    vector <int> pre(n + 1,0);


    for(int i = 0 ; i <n ; i ++){
        cin >> v[i];
        

    }
    for(int i =1; i <n; i++){
        pre[i] = pre[i - 1] + v[i]; 
    }
}

// prefix sum;

// 0 )_ ! 2. 3 3;
