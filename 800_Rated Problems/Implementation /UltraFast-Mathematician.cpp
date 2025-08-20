//pairs of nubmers,
//if ith digit is 1 if digits differ
//else zero
#include <iostream>
#include <string>

using namespace std;

int main(){
    string x,y,z;
    cin >> x >> y;

    for(int i = 0; i <y.length(); i++){
        if(x[i] != y[i]){
            z.push_back('1');
        }else{
            z.push_back('0');
        }
    }
    cout << z;
}
