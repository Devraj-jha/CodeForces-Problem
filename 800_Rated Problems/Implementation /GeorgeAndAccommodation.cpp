#include <iostream>
using namespace std;

int main(){
int n,sn;
sn =0;
cin>>n;

for(int i = 0; i<n; i++){

 int a,b;
 cin>>a>>b;
 if(b-a>= 2){
  sn++;
 } 
}
cout<<sn;

  return 0;
}