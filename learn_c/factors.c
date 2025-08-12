#include<stdio.h>

void main(){

    int n , product = 1;
    printf("Enter the binary = ");
    scanf("%d", &n);

    while(n > 1){
        product*= n;
        n--;
    }
    printf("Factor =%d\n",product);
}