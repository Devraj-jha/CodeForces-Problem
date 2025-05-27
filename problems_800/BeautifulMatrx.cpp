#include <iostream>

using namespace std;

int main(){
  int matrix[5][5];
  int row, col;

  for(int i = 0; i<5; i++){
    for(int j = 0; j<5; j++){
      cin>>matrix[i][j];
    }
  }
  for(int i = 0; i<5; i++){
    for(int j = 0; j<5; j++){
      if(matrix[i][j]==1){
        row = i;
        col = j;
      }
    }
  }
  int moves = abs(row-2) + abs(col -2 );

  cout <<moves;

}

//abs stands for absoulte value
//removes any negative sign from a num.
//we can calculate distance between 2 points
//abs it is requred to calculate negative things if ther is.
//for loops like I learned 
//I learned abt 2d array
