#include <stdio.h>
#include <math.h>

int main() {
    int n, r, p = 0;
    int ans = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        r = n % 10;             
        ans += r * pow(2, p);   
        p++;
        n /= 10;              
    }

    printf("Decimal = %d\n", ans);
    return 0;
}
