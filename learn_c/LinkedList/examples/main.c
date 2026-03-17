#include <stdio.h>
#include "List.h"

int main(){
    Node head, n1, n2;

    head.data = 10;
    head.next = &n1;

    n1.data = 20;
    n1.next = &n2;

    n2.data = 30;
    // n2.next = NULL;

    printLL(&head);  
    // printf("\n");
}