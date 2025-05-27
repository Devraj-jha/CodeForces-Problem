#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

string Username;
cin >> Username;
set<char> s1;

for(char c : Username){
  s1.insert(c);
}
if(s1.size()% 2== 0){
  cout<<"CHAT WITH HER!";
}else{
  cout<<"IGNORE HIM!";
}


}