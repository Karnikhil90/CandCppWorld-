#include <stdio.h>
#include <string.h>

void main(){
    const char id[] = "admin", pass[] = "admin";
    char name[30],password[30];

    printf("Enter your id : ");
    scanf("%s" , name);
    printf("Enter your password : ");
    scanf("%s",password);

    if(!strcmp(name,id) && !strcmp(password,pass)){
        printf("login successfully");
    }else{
        printf("login failed");
    }
}