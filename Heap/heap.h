#include <stdio.h>
#include <stdlib.h>

#define item int

typedef struct st
{
    item *arr;
    int size;
    int rear;
}Heap;

void swap(item* a, item* b);
void init(Heap *hp, int size);
void add_max_heap(Heap *hp, item value);
void display(Heap hp);