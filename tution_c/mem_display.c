#include <stdio.h>

int main(){
    int a,b=10;
    printf("mem 0x%d",&a);
    b = &a; 
    printf("mem 0x%d",&b);

    return 0;
}