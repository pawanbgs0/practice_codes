#include <stdio.h>

int main()
{
    int a = 5;
    int *pt;

    pt = &a;

    *pt = 12;

    printf("%d\n", a);

    return 0;
}