#include "stack.h"

int main()
{
    Stack bucket;
    int usize;

    printf("Enter the size of bucket: ");
    scanf("%d", &usize);

    init(&bucket, usize);
    push(&bucket, 10);
    push(&bucket, 20);
    push(&bucket, 30);
    push(&bucket, 40);

    // printf("%d\t", peek(&bucket));
    // pop(&bucket);
    // printf("%d\t", peek(&bucket));
    // pop(&bucket);
    // printf("%d\t", peek(&bucket));
    // pop(&bucket);
    // printf("%d\t", peek(&bucket));
    // pop(&bucket);
    // pop(&bucket);

    return 0;
}