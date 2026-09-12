#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    int n,k;
    cin >> n >> k;

    vector<char> v(n);      
    for(int i = 0; i < n; i++) {
        cin >> v[i];       
    } 
    
    if(2 * k > n){
        cout << -1 << endl;
        continue;
    }
    int count_r = 0; 
    int count_l = 0;
    for(int i =0 ; i < n; i++){
        if(v[i] == 'R'){
            count_r++;
        }else{
            count_l++;
        }


    }
    int cn = 0 ; 


    for(int i = 0; i < k; i++){

        if(v[i] == 'L'){
            cn++;
        }
    }
    for(int i = n -1; i > n - k - 1; i--){
        if(v[i] == 'R'){
            cn++;
        }
    }

    cout << cn << endl;
    //calculate the pairs. 
    // we can do that//

    // we get a number?
    // 
  }

    return 0;
 }

 // RL RL ARE SAFE PAIR.
 // K WATCH PIG PAIRS
 // This is hard. 

 // but persistency is the key baby.

 // RLL RRL 
 // ( 2, 1 ,1,1 ,1 ,3 )


// R L L R R L

// R R L R L L;



// at leat two..

// R L R L
// SO IT IS NOT POSSIBLE ?? 

