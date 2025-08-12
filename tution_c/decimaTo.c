#include <stdio.h>
#include <math.h>

int main() {
    int n, r, p = 0;
    long binary = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        r = n % 2;                     
        binary += r * pow(10, p);       
        p++;
        n /= 2;
    }

    printf("Binary = %ld\n", binary);
    return 0;
}
