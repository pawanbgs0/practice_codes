// Create a function that returns the reverse of original array;


#include <stdio.h>
#include <stdlib.h>

int* reverse(int *arr, int size)
{
    int *res, i, j = 0;

    res = (int*)malloc(size * sizeof(int));

    for (i = size - 1; i >= 0; i--)
    {
        res[j] = arr[i];
        j++;
    }

    return res;
}


int main()
{
    int box[] = {1, 2, 3, 4, 5};
    int size = 5, i;
    int *answer;
    
    answer = reverse(box, 5);

    for (i = 0; i < size; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}