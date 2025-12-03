#include <stdio.h>

void printArr(int array[], int n);
int isThere(const int array[],const int size ,const int value);
void addToArray(int array[], const int size ,const int value);
void fill(int arr[],int size, int value);
int len(int *arr);

int i = 0;

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

void addToArray(int array[] ,const int size ,const int value){
    array[i++] = value;
}

int isThere(const int array[], const int size , const int value){
    for(int i = 0; i < size; i++){
        if(array[i] == value){
            return 1; // true
        }
    }
    return 0; // false
}

void fill(int arr[],int size, int value){
    // int arr[size];
    for(int i = 0; i < size;i++) arr[i] = value;
}

int len(int *arr){
    return (int)(sizeof(*arr) / sizeof(arr[0]));
}

int main(){
    int n=5,array[n];
    fill(array,n,-1);
    printArr(array,n);
    addToArray(array,n,1);
    addToArray(array,n,2);
    addToArray(array,n,2);
    addToArray(array,n, 4);
    addToArray(array,n, 5);
    printArr(array,n);
    printf("LENGTH= '%d' ", len(array));
}
