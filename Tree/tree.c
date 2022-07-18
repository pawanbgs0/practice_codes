#include "tree.h"

void init_tree(Node** root)
{
    (*root)->left = NULL;
    (*root)->right = NULL;
}

Node* create_node(item value)
{
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->right = NULL;
    temp->left = NULL;
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

void inorder(Node* root)
{
    if (root == NULL)
        return;
    
    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}

void postorder(Node* root)
{
    if (root == NULL)
        return;
    
    postorder(root->left);

    postorder(root->right);

    printf("%d ", root->data);
}


// void levelorder(Node* root)
// {
//     queue line;
//     Node* temp;

//     init(&line, 7);

//     enqueue(&line, root);

//     while (!isEmpty(&line))
//     {
//         temp = dequeue(&line);

//         if (temp->left != NULL)
//             enqueue(&line, temp->left);
        
//         if (temp->right != NULL)
//             enqueue(&line, temp->right);

//         printf("%d ", temp->data);
//     }
// }


void add_bst(Node **root, item value)
{
    if ((*root) == NULL)
    {
        *root = create_node(value);
        return;
    }

    if (value < (*root)->data)
        add_bst(&(*root)->left, value);
    
    if (value > (*root)->data)
        add_bst(&(*root)->right, value);
}

int maxi(int a, int b)
{
    if (a > b)
        return a;
    
    return b;
}

int depth(Node* root)
{
    int left, right;

    if (root == NULL)
        return 0;
    
    left = 1 + depth(root->left);
    right = 1 + depth(root->right);

    return maxi(left, right);
}


void right_rotation(Node** root)
{
    Node* temp;

    if (*root == NULL || (*root)->left == NULL)
        return;

    temp = (*root)->left->right;
    (*root)->left->right = *root;
    *root = (*root)->left;
    (*root)->right->left = temp;
}