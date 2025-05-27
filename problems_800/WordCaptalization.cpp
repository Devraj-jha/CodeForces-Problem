#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
  string word;
  cin >> word;

  char c = word[0];
  c = toupper(c);
  cout<<c+ word.substr(1);
  
}