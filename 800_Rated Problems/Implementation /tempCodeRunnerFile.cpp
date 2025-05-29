#include <iostream>
using namespace std;

int main(){
ios::sync_with_stdio(false);

int cn = 0;

int arr[4];
for(int i = 0; i<4; i++)
{
  cin>>arr[i];
}

for(int i = 0; i<4;i++){
if(arr[i]==arr[i+1]){
  cn++;
}
}
cout<<cn;

 return 0; 
}