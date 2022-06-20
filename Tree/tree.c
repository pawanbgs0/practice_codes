#include "tree.h"


void init(queue *Q, int size)
{
    Q->size = size;
    Q->front = Q->rear = -1;
    Q->arr = (ITEM *)malloc(sizeof(ITEM) * size);
}

int isEmpty(queue *Q)
{
    return (Q->front == -1) || (Q->front == Q->rear + 1);
}

int isFull(queue *Q)
{
    return (Q->front == 0 && Q->rear == Q->size-1 || Q->rear+1 == Q->front);
}

int enqueue(queue *Q, ITEM data)
{
    if(isFull(Q))
        return 0;
    if(Q->front == -1)
        Q->front = 0;
    if(Q->rear == Q->size-1)
        Q->rear = -1;
    Q->arr[++(Q->rear)] = data;
    return 1;
}

void display(queue *Q)
{
    while(Q->front <= Q->rear)
    {
        printf("%d ", Q->arr[Q->front]);
        Q->front++;
    }
    printf("\n");
}

ITEM dequeue(queue *Q)
{
    if(isEmpty(Q))
        return NULL;
    return Q->arr[Q->front++];
}




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


void levelorder(Node* root)
{
    queue line;
    Node* temp;

    init(&line, 7);

    enqueue(&line, root);

    while (!isEmpty(&line))
    {
        temp = dequeue(&line);

        if (temp->left != NULL)
            enqueue(&line, temp->left);
        
        if (temp->right != NULL)
            enqueue(&line, temp->right);

        printf("%d ", temp->data);
    }
}