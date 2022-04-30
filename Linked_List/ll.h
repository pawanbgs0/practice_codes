#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st* next;
}Node;

Node* create_node(int value); // to create nodes
void append(Node** head, int value); // to link the nodes
void traverse(Node* head); // to print the data inside the nodes

// function to delete nth node
// function to add a node before nth position
// function to add a node after nth position
// function to add a node at nth position