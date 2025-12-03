#include <stdio.h>
#include <string.h>

int ctr_words(char *words);
int ctr_words(char *words){
    int ctr = 0;
    for(int i = 0; i < strlen(words);i++){
        if(words[i] == ' ') ctr++;
    }
    return (ctr == 0) ? 0 : ctr + 1;
}

void main(){
    char name[] ="my name is nikhil";
    printf("number of words %d ", ctr_words(name)); 
}