#include<stdio.h>

void main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int key,flag = -1;
    printf("Enter the element : \n");
    scanf("%d",&key);
    // binary serach start 

    int low = 0;
    int high = n - 1;

    while (high > low)
    {
        int mid = (high + low) / 2;

        if(arr[mid] == key){
            flag = mid;
            break;
        }

        if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
    if(flag != -1){
        printf("key found at %d", flag);
    }else{
        printf("key not found");
    }

}
