#include "queue.h"

void init(Queue* line, int usize)
{
    line->arr = (int*)malloc(usize * sizeof(int));
    line->size = usize;
    line->front = -1;
    line->rear = -1;
}


int is_empty(Queue* line)
{
    if (line->front == -1 && line->rear == -1) // you can also get the result using just a single checking condition
        return 1;
    
    else 
        return 0;
}

int is_full(Queue* line)
{
    if (line->rear == line->size - 1)
        return 1;
    
    return 0;
}

void enqueue(Queue* line, int value)
{
    if (is_full(line) == 1)
    {
        printf("Queue is Full");
        return;
    }

    if (line->front == -1)
        line->front = 0;

    line->rear++;
    line->arr[line->rear] = value;
}

int dequeue(Queue* line)
{
    int temp;

    if (is_empty(line) == 1)
    {
        printf("Queue is Empty");
        return -999;
    }

    temp = line->arr[line->front];
    line->front++;

    return temp;
}