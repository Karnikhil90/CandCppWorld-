#include <stdio.h>
#include "../string/lib.c"

const char *name[6] = {"1","niku","radha","ram","nikhil","krishna"};
const char *pass[6] = {"1","niku","radha","ram","nikhil","krishna"};

void main(){
    char input_name[10],input_password[10];
    int i;
    int isExist = -1;
    printf("Enter Your name : ");
    scanf("%s",input_name);
    printf("Enter Your pass : ");
    scanf("%s",input_password);    
    for(i = 0; i < 6; i++){
        if(isEqual(input_name,name[i])==0){
            printf("userfound %d\n",i);
            isExist = 1;
            if(isEqual(input_password,pass[i])==0){
                printf("LOGIN......");
            }else
                printf("FAILED IN PASSWORD");
            break;
        }
    }
    if(isExist== -1)
        printf("NO DATA FOUND....");
    

    printf("\n\n====================================\n");
    printf("name = %lu bytes\n",sizeof(name));
    printf("input_name = %lu bytes\n",sizeof(input_name));
    printf("pass = %lu bytes\n",sizeof(pass));
    printf("input_password = %lu bytes\n",sizeof(input_password));
}