#include <stdio.h>

void get(){
    static int val = 0;
    printf("Get_id using static = %d\n", val++);
    // return val++;
}

void main(){
    for(int i = 0 ; i < 100; i++){
        // printf("Get_id using static = %d\n", get());
        get();
    }
}