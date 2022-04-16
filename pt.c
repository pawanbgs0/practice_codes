#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pt;
    int i = 0, n;

    printf("Enter the size of Array: ");
    scanf("%d", &n);
    

    pt = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &pt[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", pt[i]);
    }
    return 0;
}