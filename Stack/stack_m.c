#include "stack.h"

int main()
{
    Stack bucket;

    int bsize;
    printf("Enter the size of bucket: ");
    scanf("%d", &bsize);
    bucket.size = bsize;


    init(bucket);
    // bucket.arr = (int*)malloc(5 * sizeof(int));
    // bucket.tos = -1;
    push(bucket, 5);
    printf("%d\n", peek(bucket));

    return 0;
}