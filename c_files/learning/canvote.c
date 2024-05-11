#include <stdio.h>

void main(){
    int age = 0; //Default value
    printf("Enter Your age :");
    scanf("%d",&age);
   
    if(age >=18)
        printf("You can vote ");
    else
        printf("You cannot vote");
}