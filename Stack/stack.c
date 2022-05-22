#include "stack.h"

void init(Stack pbucket)
{
    pbucket.arr = (int*)malloc(pbucket.size * sizeof(int));
    pbucket.tos = -1;
}

int is_full(Stack bucket)
{
    if (bucket.tos == bucket.size - 1)
        return 1;
    else 
        return 0;
}

int is_empty(Stack bucket)
{
    if (bucket.tos == -1)
        return 1;
    else
        return 0;
}

void push(Stack bucket, int value)
{
    if (is_full(bucket) == 1)
        return;

    bucket.tos = bucket.tos + 1;
    bucket.arr[bucket.tos] = value;
}

int pop(Stack bucket)
{
    int ans;

    if (is_empty(bucket) == 1)
        return -9999;
    
    ans = bucket.arr[bucket.tos];
    bucket.tos = bucket.tos - 1;

    return ans;
}

int peek(Stack bucket)
{
    if (is_empty(bucket) == 1)
        return -99999;

    return bucket.arr[bucket.tos];
}