#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;

  cin>>s;
  int a= 0,d =0;
  for(int i = 0 ; i < n;i++)
{
  if(s[i]=='A'){
    ++a;
  }else{
    ++d;
  }
  


}
if(a>d){
    cout<<"Anton";
  }
  else if(d>a){
    cout<<"Danik";
  } else if(a==d){
    cout<<"Friendship";
  }


  
}
//i could have  also used for range function