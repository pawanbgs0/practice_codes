#include "queue.h"

int main()
{
    Queue line;
    int usize;

    printf("Enter the size of Queue: ");
    scanf("%d", &usize);

    init(&line, usize);
    enqueue(&line, 10);
    enqueue(&line, 20);
    enqueue(&line, 30);
    enqueue(&line, 40);

    printf("%d\t", dequeue(&line));
    printf("%d\t", dequeue(&line));
    printf("%d\t", dequeue(&line));
    printf("%d\t", dequeue(&line));
    printf("%d\t", dequeue(&line));
    return 0;
}