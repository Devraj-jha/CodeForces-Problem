 #include <iostream>
 using namespace std;

 int main()
 {
	 int t;
	 cin >> t;
	 while(t--){
		 int n;
		 cin >> n;
		 int sum = 0;
		 for (int i = 0;i < n; i++){
			 int a;
			 cin >> a;
			 sum += a;
		 }
   if(sum < n)cout << "1\n";
   else cout << sum - n << "\n";
	 }
 }



// 3 + 1/ 2 = 1.5 => 1 
//3/2  => 3 - 1; 
//8 + 4 + 6 + 2 = 20/4