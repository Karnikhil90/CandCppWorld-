#include <stdio.h>
#include <string.h>


int vowels(char* lines);

int vowels(char* lines){
    lines = strlwr(lines);
    int counte = 0;
    for(int i =0;i < strlen(lines);i++){
        if(lines[i]=='a' || lines[i]=='e' || lines[i]=='i' || lines[i]=='o' ||lines[i]=='u') 
        counte++;
    }
    return counte;
}

void main(){
    char lines[] = "aeioU";
    
    printf("Number of vowels in that line is %d ",vowels(lines));
}
