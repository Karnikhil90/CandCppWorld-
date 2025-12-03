#include <stdio.h>

void main(){
    int nums[] = {77,50,75,100,55};
    int size = sizeof(nums) / sizeof(nums[0]);
   for(int i = 0; i < size;i++){
       printf("[%d] %p \n", i , &nums[i]);
   }
}
