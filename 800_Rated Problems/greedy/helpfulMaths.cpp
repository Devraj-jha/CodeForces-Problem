#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin >>s;


  vector <char> nums;
  for(int i = 0; i<s.length(); i +=2 ){
    nums.push_back(s[i]);
  }
sort(nums.begin(), nums.end());

for(int i = 0; i<nums.size(); i++){
  cout<<nums[i];
  if(i< nums.size()- 1) cout<< "+";

}

  
}
//I learned sorting form this quesiton

//algorithms
//sort(v.begin(),v.end());
//I understood abt basic vector..
//i took a vectors stored charactrs in it..