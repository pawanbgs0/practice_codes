#include <stdio.h>

void display_reverse(int *arr, int last_index)
{
    if (last_index == -1)
    {
        return;
    }

    printf("%d ", arr[last_index]);
    display_reverse(arr, last_index - 1);
}

int main()
{
    int arr[] = {1,2,3,4,5};

    display_reverse(arr, 4);
    return 0;
}