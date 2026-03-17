#include "List.h"
void printLL(Node *head){
    if(head == NULL) {
        printf("NULL\n");
        return;
    };
    printf("%d->",head->data);
    printLL(head->next);
}
