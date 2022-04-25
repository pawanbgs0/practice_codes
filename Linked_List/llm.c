#include "ll.h"

int main()
{
    Node* head = NULL;

    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);

    traverse(head);

    return 0;
}