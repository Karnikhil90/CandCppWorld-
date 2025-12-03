#include <stdio.h>
/*
 *
 * finding all the peak element from an array.
 * like { 1, 3, 2, 7, 6, 8, 4 }
 * => 3 , 7 , 8 [strictly greater than its
 */

 void printArr(int array[], int n)
 {
     printf("[");
     for (int i = 0; i < n; i++)
     {

         printf("%d", array[i]);
         if(i != n - 1) printf(", ");
     }
     printf("] len = %d",n);
     printf("\n");
 }

void main(){
    int arr[] = { 1, 3, 2, 7, 6, 8, 4 } ;
    int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);

    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2])
            printf("%d = %d \n", i , arr[i]);
    }
}
