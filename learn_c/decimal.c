#include <stdio.h>

int main(void){
    int n, decimal = 0,pos=1; // here @int pos mean the postition of binary like 2 then 4 , then 8 and so on.

    printf("Enter the binary = ");
    scanf("%d", &n);

    while(n > 0){
        decimal += (pos * (n % 10));
        n /= 10;
        pos *= 2; // double each time
    }
    printf("decimal = %d\n", decimal);

    return 0;
}
