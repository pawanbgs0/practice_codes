#include "heap.h"

int main()
{
    Heap h1;

    init(&h1, 7);

    add_max_heap(&h1, 52);
    add_max_heap(&h1, 41);
    add_max_heap(&h1, 96);
    add_max_heap(&h1, 36);
    add_max_heap(&h1, 78);
    add_max_heap(&h1, 96);
    add_max_heap(&h1, 14);
    
    printf("The deleted items are; ");
    printf("%d ", remove_max_heap(&h1));
    printf("%d ", remove_max_heap(&h1));
    printf("%d ", remove_max_heap(&h1));
    printf("%d ", remove_max_heap(&h1));
    printf("%d ", remove_max_heap(&h1));
    printf("%d ", remove_max_heap(&h1));
    printf("%d ", remove_max_heap(&h1));
    // display(h1);
    return 0;
}