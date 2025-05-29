#include <iostream>
using namespace std;

int main(){

 int k,n,w;
 cin>>k>>n>>w;
 int tc =  k * w * (w+1)/2;

 int bm = tc -n;
 if(bm<0){
  bm = 0;
 }
 cout<<bm<<endl;

return 0;

}



//this was so easY WHY i couldn't solve it.. :(.
  
