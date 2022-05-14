#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    struct st* next;
}node;

node* create_node(int value);
void append(node* head, int value);
node* insert_at_begining(node* head,int data);
node* delet(node* head,int n);
node* insert_at_nth_position(node* head,int data,int n);
node* insert_after_nth_position(node* head,int data,int n);
node* insert_before_nth_position(node* head,int data,int n);
void traverse(node *head);