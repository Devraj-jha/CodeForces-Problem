#include <iostream>
using namespace std;

int main(){

   int n; 
   cin >>n;
   char str[n];
   int sn = 0 ; 


   for(int i = 0; i <n ; i++){
    cin>>str[i];
   }




  for(int i = 0; i<n; i++){

    if(str[i] == str[i-1]){
      sn++;
    }
  }

  cout<<sn;
}