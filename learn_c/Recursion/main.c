#include <stdio.h>

int fac(int);
int toN(int n);
int lcm(int a , int b);
int hcf(int a , int b);
int fib(int num);

int fac(int num){
    return (num == 1) ? 1 : (num * fac(num - 1));
}
int toN(int n){
    return (n <= 1) ? 1 : (n + toN(n - 1)); 
}

int hcf(int a , int b){
    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
int lcm(int a , int b){
    return(int)(a / hcf(a,b)) * b;
}

int fib(int num){
    return (num <= 1) ? num : fib(num - 1) + fib(num - 2);
}



void main(void){
    // int n = fac(5);
    // printf("Factorial = %d\n",n);
    // int s = toN(0);
    // printf("sum of N = %d\n",s);
    // int h = hcf(30,20);
    // printf("hcf = %d\n",h);
    // printf("LCM= %d\n",lcm(30,20));

    printf("Fib= %d\n",fib(5));

}