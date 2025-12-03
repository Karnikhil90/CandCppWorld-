#include <stdio.h>

void main(){
    char names[] = {'A','S', 'U', 'S', '\n', '\0'};
    int i = 0;
    while('\0' != names[i]){
        printf("%c",names[i++]);
    }
}
