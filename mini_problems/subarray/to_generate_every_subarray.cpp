#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n; 
    
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }

for(int l=0;l<n;l++)
{
    for(int r=l;r<n;r++)
    {
        for(int i=l;i<=r;i++)
            cout<<v[i]<<" ";

        cout<<"\n";
    }
}
    return 0;  
}  