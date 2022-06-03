#include "stack.h"

void init(Stack* bucket, int usize)
{
    bucket->arr = (int*)malloc(sizeof(int) * usize);
    bucket->size = usize;
    bucket->tos = -1;
}

int is_full(Stack* bucket)
{
    if (bucket->tos == bucket->size - 1)
        return 1;
    else
        return 0;
}

int is_empty(Stack* bucket)
{
    if (bucket->tos == -1)
        return 1;
    else
        return 0;
}

void push(Stack* bucket, int value)
{
    if (is_full(bucket))
    {
        printf("Stack Overflow");
        return;
    }
        
    
    bucket->tos++;
    bucket->arr[bucket->tos] = value;
}

int pop(Stack* bucket)
{
    int temp;

    if (is_empty(bucket))
    {
        printf("Stack is underflow");
        return -999;
    }

    temp = bucket->arr[bucket->tos];
    bucket->tos--;

    return temp;
}

int peek(Stack* bucket)
{
    if (is_empty(bucket))
    {
        printf("Bucket is Empty");
        return -999;
    }

    return bucket->arr[bucket->tos];
}