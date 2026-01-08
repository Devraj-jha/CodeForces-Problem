#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
      int n; 
      cin >> n; 
      string a; 
      cin >> a; //lowercase string
      int m; 
      cin >> m; 
      string b,c; 
      cin >> b >> c; 
      //c -> contains "V" , "D";
      //D -> end of the string. 
      //V -> front of the string. 

      for(int i = 0; i <m; i ++){
        if(c[i] == 'D'){
            a = a + b[i];
        }else {
            a = b[i] + a; 
        }
      }
      cout << a << '\n';
        

    }


    return 0;  
}  
