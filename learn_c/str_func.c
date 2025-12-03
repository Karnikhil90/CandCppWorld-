#include <stdio.h>
#include <string.h>

void main(){
    char name[30], newName[30];
    int len = 0;
    printf("Enter your name : " );
    scanf("%s", name);
    len = strlen(name);
    printf("name='%s' , len=%d \n",name,len);
    // strcpy(newName , name);

    printf("Enter your newName : " );
    scanf("%s", newName);

    printf("newName='%s' , len=%d \n",newName,strlen(newName));
    if(!strcmp(name, newName)){ // 0 = FALSE
        printf("TRUE");
    }else{
        printf("FALSE");
    }
}
