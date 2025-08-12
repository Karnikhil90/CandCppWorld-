#include <stdio.h>
#include <conio.h>
void main ()
{
    int a = 10;
    char chr = 'N';
    float fl = 10.11;

    int *x = &a;
    char *y = &chr;
    float *z = &fl;
    printf("int pointer size = %d\n",sizeof(x));
    printf("char pointer size = %d\n",sizeof(y));
    printf("float pointer size = %d\n",sizeof(z));

}