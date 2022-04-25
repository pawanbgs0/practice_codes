#include <stdio.h>

typedef struct st
{
    int data;
    struct st* next;
}Node;

Node* create_node(int value);
void append(Node** head, int value);
void traverse(Node* head)