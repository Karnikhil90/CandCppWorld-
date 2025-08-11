#include <stdio.h>

/**
 *
 * here I will write a program with slicing a number with some conditions.
 * So, The conditions are :
 * 1. only int or any number storing data type can be used.
 * 2. loops
 * 3. conditional statements(if-else).
 */

 int main(){
     int n, num, rev=0, sum=0, count=0,isNegative=0,product=1;
     printf("Enter the binary = ");
     scanf("%d", &n);
     num = n;

     if(n <= 0){
         isNegative=!isNegative;
         n = -n;
     }

     while(n > 0){
         int last_number = n % 10;
         sum+=last_number;
         product*=last_number;
         rev = (rev * 10) + last_number;
         count++;
         n /= 10;
     }

     printf("\nReverse =%d \nSum =%d \nProduct =%d\nCount =%d\n",rev,sum,product,count);
     if(!isNegative && rev == num){
         printf("Its a plaindorm number.\n");
     }else{
         printf("Its not palindrom number.\n");
     }
     return 0;
 }
