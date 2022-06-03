#include <stdio.h>
#include <stdlib.h>

typedef struct st 
{
    int *arr;
    int size;
    int front;
    int rear;
}Queue;

void init(Queue* line, int usize);
int is_empty(Queue* line);
int is_full(Queue* line);
void enqueue(Queue* line, int value);
int dequeue(Queue* line);