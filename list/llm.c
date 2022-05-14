#include "ll.h"

int main()
{
    Node* head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("\n");

    traverse(head);

    return 0;
}