#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **pt2;
    int i, j;

    pt2 = (int**)malloc(sizeof(int*) * 12);

    for (i = 0; i < 12; i++)
    {
        *(pt2 + i) = (int*)malloc(sizeof(int) * 12);
    }
    
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            printf("Enter the element at %d%d: ", i, j);
            scanf("%d", &pt2[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            printf("%d ", pt2[i][j]);
        }
        printf("\n");
    }

    return 0;
}