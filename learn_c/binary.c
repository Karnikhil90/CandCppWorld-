#include <stdio.h>

int main(){
    int n = 0;
    int bin = 0;
    int i = 1;

    printf("Enter the val = ");
    scanf("%d", &n);

    while(n > 0){
        bin = bin + (n % 2) * i;
        printf("n=%d , bin=%d , i=%d\n", n, bin, i);
        i *= 10;
        n /= 2;
    }

    printf("binary = %d\n", bin);
    return 0;
}
