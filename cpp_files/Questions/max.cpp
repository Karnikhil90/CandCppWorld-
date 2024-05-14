//Write a function which takes in 2 numbers and returns the greater of those two
#include <iostream>
using namespace std;

int32_t max(int32_t a , int32_t b)
{
	return a > b ? a : b;
}

int main()
{
		int z,x;
	cout << "Enter the number : ";
	cin >> x;
	cout << "Enter the number : ";
	cin >> z;
	cout<<max(x,z);
	return 0;
}