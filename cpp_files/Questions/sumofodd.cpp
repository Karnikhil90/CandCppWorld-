// 2.Write a function to print the sum of all odd numbers from 1 to n.

#include <iostream>
using namespace std;

int main(){
	cout << "Enter the range : ";
	int n = 10;
	cin >> n;
	int ans = 0;
	for(int i = 0; i <= n;i++){
		if(i%2 != 0) {
			ans+=i;
			cout<<i <<"\n";
		}
	}
	cout << "Answer = "<<ans<<"\n";
	return 0;
}