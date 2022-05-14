#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Program to Store Data in Structures Dynamically

int main()
{
    int val = 15;
    int *pt;

    pt = &val;

    printf("1. %d \n", *pt);

    *pt = 20;

    printf("2. %d \n", *pt);
    return 0;
}