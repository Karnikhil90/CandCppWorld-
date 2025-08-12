#include <stdio.h>
#include <conio.h>

void main ()
{
    int x=23,y=69,*p,*p1;
    int sum=0,diff=0;
    p=&x;
    p1=&y;
    sum=*p+*p1;
    diff=*p-*p1;
    printf("The sum is = %d\n",sum);
    printf("The difference is =%d\n",diff);
    // getch();

}