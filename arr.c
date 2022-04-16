#include <stdio.h>

int main()
{
    int arr[5] = {25, 36, 45, 78, 96};
    int i = 0;


    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}