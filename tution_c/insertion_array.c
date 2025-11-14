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


void main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    while (1)
    {
      
        int pos = -1;
        int choice = -1;
        printf("1. Insert\n2. Delete \n3. Display \nEnter the choice = ");
        scanf("%d", &choice);
        if (choice == 0)
            return; // '0' for exit
     
        if (choice > 0 && choice < 3)
        {
            printf("Enter the postition = ");
            scanf("%d", &pos);
        }
        else if(choice > 0)
        {
            printf("Wrong choice \n");
        }

        if (choice == 1 && (pos > 0 && pos <= 10)) // insert an element
        {
            int ele;
            printf("Enter the element = ");
            scanf("%d", &ele);

            for (int i = n; i > pos -1 ; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = ele;
            n++;
        }
        else if (choice == 2 && (pos > 0 && pos <= 10))
        {
            for (int i = pos; i < n - 1; i++)
            {
                arr[i] = arr[i+ 1];
            }
            n--;
        }
        else if (choice == 3)
        {
            printArr(arr, n);
        }
    }
}