#include <stdio.h>

void main(){
    int n , last, isascending=1;

    printf("Enter the val = ");
    scanf("%d", &n);

    if(n < 0) n =-n;

    last = n % 10;
    n /= 10;


    while (n > 0){
        int current = n % 10;
        if(last < current) {
            isascending=0;
            break;
        }
        last = current;
        n /= 10;
    }
    if(isascending)
        printf("yesss\n");
    else
        printf("noooo\n");
}