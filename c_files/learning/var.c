#include <stdio.h>

int main(void){
    printf("float side '%d' byte \n",sizeof(float));
    printf("int side '%d' byte \n",sizeof(int));
    printf("long side '%d' byte \n",sizeof(long));
    printf("char side '%d' byte \n",sizeof(char));
    printf("long long side '%d' byte \n",sizeof(long long));

    return 0;
}