#include <stdio.h>

void main(){
    int array[] = {0,1,2,9,6,8,4,5,67,44,45,46};
    int n = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < n - 1; i++){
       printf("%d, ",array[i]);
       if(array[i] >= array[i + 1])
           printf("\n");
    }
       printf("%d\n", array[n - 1]);
}
