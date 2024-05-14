// Enter 3 numbers from the user & make a function to print their average.

#include <iostream>
using namespace std;

void avg(int16_t a ,int16_t b,int16_t c){
	int16_t average = (a+b+c)/3;
	cout<<average;
}

int main(){
	int16_t num1,num2,num3;
	cout<<"Enter three number : ";
	cin>>num1>>num2>>num3;
		
	avg(num1,num2,num3);
	
	return 0;
}