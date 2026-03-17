#ifndef LIST_H
#define LIST_H
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void printLL(Node *head);

#endif