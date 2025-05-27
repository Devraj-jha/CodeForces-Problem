#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n,k,cn = 0;
  cin>>n>>k;
  vector<int> arr(n);

  for(int i =0 ; i<n; i ++){
    cin>>arr[i];
  }

  for(int i = 0; i<n; i++ ){
    if(arr[i]>= arr[k - 1] ){
      if(arr[i]>0){
        cn++;
      }
    }
  }

  cout<<cn;
  
  return 0;
}