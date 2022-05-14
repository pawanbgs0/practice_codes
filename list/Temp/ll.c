#include "ll.h"
node* create_node(int value)
{
    node* temp;

    temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}


// void append(node** head, int value)
// {
//     node* temp = create_node(value);
//     node* current = *head;

//     if (*head == NULL)
//     {
//         *head = temp;
//         return;
//     }
    
//     while (current->next != NULL)
//     {
//         current = current->next;
//     }

//     current->next = temp;
// }
void append(node* head,int data)
{
    node* ptr = (node*)malloc(sizeof(node));
    node *p = head;
    if(head == NULL)
    {
        head = ptr;
        return;
    }
    while(p -> next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    ptr->data = data;
    // return head;
}

node* insert_at_begining(node* head,int data)
{
    node* ptr = (node*)malloc(sizeof(node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}
node* delet(node* head,int n)
{
    int i=0;
    while (i != n-1)
    {
        head = head ->next;
        i++;
    }
    head -> next = head -> next -> next;
    return head;
}
node* insert_at_nth_position(node* head,int data,int n)
{
    node* ptr = (node*)malloc(sizeof(node));
    node* p = head;
    int i=0;
    while(i != n-1)
    {
        p = p -> next;
        i++;
    }
    ptr->data=data;
    ptr ->next = p -> next;
    p ->next = ptr;
    return head;
}
node* insert_after_nth_position(node* head,int data,int n)
{
    node* ptr = (node*)malloc(sizeof(node));
    int i=0;
    while(i != n)
    {
        head = head -> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = head -> next;
    head -> next = ptr;
    return head;
}
node* insert_before_nth_position(node* head,int data,int n)
{
    node* ptr = (node*)malloc(sizeof(node));
    node* p = head;
    int i=0;
    while(i != n-2)
    {
        p = p -> next;
        i++;
    }
    ptr -> data = data;
    ptr ->next = p -> next;
    p -> next = ptr;
    return head;
}
void traverse(node *head)
{
    while(head != NULL)
    {
        printf("%d\n",head -> data);
        head = head -> next;
    }
    printf("\n");
}