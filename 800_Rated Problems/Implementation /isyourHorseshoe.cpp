#include <iostream>
#include <set>
using namespace std;

int main(){
  ios::sync_with_stdio(false);

  set<int> s;
  for(int i = 0; i<4; ++i){
    int x;
    cin>>x;
    s.insert(x);
  }
  cout<<4-s.size();
  return 0;
}
//from this question i learnt abt set i realise that if there is a repitation i can use set data structure 
//sets store only unique elements in them.