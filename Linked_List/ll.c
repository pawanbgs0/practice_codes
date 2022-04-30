#include "ll.h"

Node* create_node(int value)
{
    Node* temp;

    temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}


void append(Node** head, int value)
{
    Node* temp = create_node(value);
    Node* current = *head;

    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
}


void traverse(Node* pthead)
{
    while (pthead != NULL)
    {
        printf("%d ", pthead->data);
        pthead = pthead->next;
    }
    printf("\n");
}