#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
   int height = 0;
   int level = 1; 

while(true){
    int Cubes = level * (level + 1)/2;
    if ( n >= Cubes){
        n -= Cubes;
        height++;
        level++; 

    }else{
        break;
    }
}
cout << height << "\n";
}  
// ok first  i have to firgure out how to derive the hiehgt of the tower. 
//it will start from top which is 1 => 1 + 2 ( 3 + 1) => 1 + 2 + 3 (6) => 1 + 2 + 3 + 4 (10) => 5 * 4
//we have to substract this thing until the n become zero. 
        