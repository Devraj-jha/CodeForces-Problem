#include <iostream>
using namespace std;

int main(){
  int x,y;
  cin>>x>>y;
  int c = x*y;
  int z;
  if( c% 2 ==0){
    z = c/2;
  } else {
    z = (c-1)/2;
  }
 cout <<z;
}