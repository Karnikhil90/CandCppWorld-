#include<stdio.h>


// FUNCTION PROTOTYPE
int isEqual(const char* str, const char* str1);
void println(const char* str);
// void println();

int isEqual(const char* str, const char* str1) {
    int i = 0;
    while (str[i] != '\0' && str1[i] != '\0') {
        if (str[i] != str1[i])
            return 0; 
        i++;
    }
    return (str[i] == '\0' && str1[i] == '\0') ? 1 : 0;
}

void println(const char* str){
    printf("%s\n",str);
}
