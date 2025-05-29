#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  bool hard = false;
  for(int i = 0; i<n; i++){

    int diff;
    cin>>diff;
    if(diff==1){
      hard = true;
    }
  }
  if(hard) cout<< "HARD";
  else cout<<"EASY";

}

//from this problem i learned abt boolean logic that i can use
//if only 2 things are output