#include <iostream>

using namespace std;

int main(){

int n,h;
cin>>n>>h;
int person[n];
int cn = 0;


for(int i = 0; i< n; i++){

    cin>>person[i];
 
}
for(int i  = 0 ; i<n; i++){
  if(person[i]> h){
    cn= cn + 2;
  }else{
    cn++;
  }
    
  
}

cout<<cn;


  
  return 0;
}

//