#include "heap.h"

void swap_item(item* a, item* b)
{
    item c = *a;
    *a = *b;
    *b = c;
}


void init(Heap *hp, int size)
{
    hp->arr = (item*)malloc(sizeof(item)*size);
    hp->rear = -1;
    hp->size = size;
}

void add_max_heap(Heap *hp, item value)
{
    int child, parent;

    if (hp->rear == hp->size - 1)
        return;

    hp->rear++;
    hp->arr[hp->rear] = value;

    child = hp->rear;

    while (child != 0)
    {    
        parent = (child - 1) / 2;

        if (hp->arr[child] > hp->arr[parent])
            swap_item(&(hp->arr[child]), &(hp->arr[parent]));

        child = parent;
    }
}

void display(Heap hp)
{
    for (int i = 0; i < hp.size; i++)
    {
        printf("%d ", hp.arr[i]);
    }
    printf("\n");
}


item remove_max_heap(Heap* hp)
{
    int res;
    int parent, child;

    if (hp->rear == -1)
        return -999;

    res = hp->arr[0];
    hp->arr[0] = hp->arr[hp->rear];
    hp->rear--;

    parent = 0;

    do 
    {
        child = 2 * parent + 1;
        
        if (child > hp->rear)
            break;

        if (child < hp->rear && hp->arr[child] < hp->arr[child + 1])
            child++;

        if (hp->arr[parent] < hp->arr[child])
        {
            swap_item(&(hp->arr[parent]), &(hp->arr[child]));
            parent = child;
        }
        
        else 
            break;
    }while (child <= hp->rear);
    return res;
}