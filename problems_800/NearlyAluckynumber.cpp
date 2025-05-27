#include <iostream>
#include <string>

using namespace std;

int main(){

string s;
int sn = 0;
cin>>s;

for(int i = 0; i<s.length(); i++)
{

  if(s[i] == '7' || s[i] == '4'){
    sn++;
  }
  

}
if(sn == 4 || sn == 7){
  cout<<"YES";
}else{
  cout<<"NO";
}

  return 0;
}