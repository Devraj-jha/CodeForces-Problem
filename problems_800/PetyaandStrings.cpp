#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

  string first;
  cin>> first;

  string second;
  cin >> second;


  for(char &c :first){
    c = tolower(c);
  }
  for(char &c: second){
    c = tolower(c);
  }
  if(first > second){
    cout<<"1";
  }else if (second > first){
    cout<<"-1";
  }else if(first == second){
    cout <<"0";
  }else{
    cout<<"error";
  }

  return 0;
  
}

//String in cpp are compared lexiographically
// to lower it only words on char
//So i learned new type of function
//for(char )