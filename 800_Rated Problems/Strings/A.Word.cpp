



#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

string s;
cin >>s;
int sn = 0;
for(int i = 0; i<s.size();i++){

  if(isupper(s[i])){
    sn++;
  }

}
if(sn > s.size() - sn){
  for(char &c : s){
   c = toupper(c);
  }
} else{
  for(char &c : s){
    c = tolower(c);
  }
}

cout<<s;
  

  return 0;
}

//in problem i leanred aobut toupper tolower thing
//how to change value by refrence
