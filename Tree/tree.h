#include <stdio.h>
#include <stdlib.h>

#define item int


typedef struct st
{
    item data;
    struct st* left;
    struct st* right;
}Node;

#define ITEM Node*

void init_tree(Node** root);
Node* create_node(item value);
void preorder(Node* root);
void inorder(Node* root);
void postorder(Node* root);
void levelorder(Node* root);




typedef struct queue
{
    ITEM *arr;
    int rear, front, size;
}queue;

void init(queue *, int);
int isEmpty(queue *);
int isFull(queue *);
int enqueue(queue *, ITEM);
void display(queue *);
ITEM dequeue(queue *);