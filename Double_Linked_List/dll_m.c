#include "dll.h"

int main()
{
    Node *head = NULL, *tail = NULL;
    Node *pos = NULL;

    add_end(&head, &tail, 5);
    add_end(&head, &tail, 10);
    add_end(&head, &tail, 50);
    add_end(&head, &tail, 15);
    add_end(&head, &tail, 20);
    add_end(&head, &tail, 25);

    traverse_next(head);
    traverse_prev(tail);

    pos = search_by_pos(head, 3);
    add_in_between_after(pos, 30);

    return 0;
}