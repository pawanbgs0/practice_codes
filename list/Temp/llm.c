#include "ll.h"

int main()
{
    node *head = (node*)malloc(sizeof(node));
     
    // head -> data = 5;
    // head->next = NULL;

    append(head,55);
    append(head,25);
    append(head,35);
    append(head,45);
    append(head,65);

    // head = insert_at_begining(head,200);
    // head = insert_at_begining(head,100);
    // insert_at_nth_position(head,35,2);
    // insert_after_nth_position(head,36,2);
    // insert_before_nth_position(head,37,2);
    // delet(head,3);

    traverse(head);
    return 0;
}