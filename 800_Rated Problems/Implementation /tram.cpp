#include <iostream>
using namespace std;

int main(){
ios::sync_with_stdio(false);

int n;
cin>>n;

int current = 0;
int max_people = 0;
for(int i = 0; i <n; i ++ ){
  int a,b;
  cin >> a>> b;

  current = current - a;
  current = current + b;
  max_people = max(max_people, current);

}

 cout<< max_people<< endl;


 return 0; 
}