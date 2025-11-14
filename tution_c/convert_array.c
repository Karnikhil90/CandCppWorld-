#include <stdio.h>

void printArr(int array[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {

        printf("%d", array[i]);
        if(i != n - 1) printf(", ");
    }
    printf("] len = %d",n);
    // printf("\n");
}

void print2D(int arr[][3], int row ,int col){
    printf("[ ");
    for(int i = 0; i < row;i++){
        printArr(arr[i],col);
        if(i != row - 1) printf(", \n");
    }
    printf("] row=%d, col=%d \n",row,col);
    printf("\n");
}

void main(){
    int arr[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11, 12}
    };
    int row = 4 , col = 3;
    print2D(arr,row,col);

    int n = row * col;
    int newArray[n];
    int idx = 0;
    for(int i = 0;i < row;i++){
        for(int j = 0; j < col;j++){
            newArray[idx] = arr[i][j];
            idx++;
        }
    }
    printArr(newArray,n);
    printf("\n");
}
