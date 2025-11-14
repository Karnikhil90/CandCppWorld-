#include <stdio.h>

void printArr(int array[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {

        printf("%d", array[i]);
        if(i != n - 1) printf(", ");
    }
    printf("] len = %d \n",n);
    printf("\n");
}

void main(){
    int arr[] = {10,8,50,60,14};
    int n = 5;
    printf("Before Sort \n");
    printArr(arr,n);

    for(int i = 1; i < n; i++){
        int t = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > t){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = t;

    }

    printf("After Sort \n");
    printArr(arr,n);
}
