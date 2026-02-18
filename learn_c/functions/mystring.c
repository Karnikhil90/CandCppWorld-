#include <stdio.h>
// #include <string.h>
void cpy(char* copy, char* word);
int len(const char *word);
int cmp(const char * word1, const char* word2);
void rev(char* copy_to, const char* word );

int len(const char *word){
    int c = 0;
     while(*word != '\0'){
        word++;
        c++;
    }
    return c;
}

void cpy(char* copy, char* word){
    int size = len(copy);
    if(size != 0) copy += size;
    while((*copy++ = *word++)){}
}

// false = 0
int cmp(const char *a, const char *b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] != b[i]) return a[i] - b[i];
        i++;
    }
    return a[i] - b[i];
}


void rev(char* to, const char* from){
    int n = len(from);
    to[n] = '\0';
    while(n > 0) to[n-- - 1] = *from++;
}

int ispalindorm(const char word[]){
    char reverce[len(word)];
    rev(reverce,word);
   return (cmp(reverce,word) == 0) ? 1 : 0 ;//  true : false
}

// void main(){
//     char s1[100], r[100];
//     printf("Enter some value : ");
//     scanf("%s", &s1);
//     rev(r, s1);
//     printf("original= %s | Reverce= %s | ispalindorm = ",s1,r);
//     (ispalindorm(s1)) ? printf("True") : printf("False");
// }
