#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st* next;
}node;

node* create_node(int value)
{
    node *temp;

    temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}

void append(node* head, int value)
{
    node* temp;

    temp = create_node(value);

    if (head == NULL)
        head = temp;

    
    if (head->next == NULL)
    {
        head->next = temp;
    }

    if (head->next->next == NULL)
    {
        head->next->next = temp;
    }
}



int main()
{
    node* head = NULL;

    append(head, 5);
    return 0;
}