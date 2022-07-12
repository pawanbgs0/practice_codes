#include <stdio.h>
#include <stdlib.h>

#define item int


typedef struct st
{
    struct st* left;
    struct st* right;
    item data;
}Node;

Node* create_node(item value)
{
    Node* temp;

    temp = (Node*)malloc(sizeof(Node));

    temp->left = NULL;
    temp->right = NULL;
    temp->data = value;

    return temp;
}

void preorder(Node* root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = NULL;

    root = create_node(5);
    root->left = create_node(15);
    root->left->left = create_node(16);
    root->left->right = create_node(18);
    root->right = create_node(22);
    root->right->right = create_node(36);


    preorder(root);
    return 0;
}
