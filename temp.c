#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Program to Store Data in Structures Dynamically


typedef struct
{
    int marks;
    char grade;
}info;


int main()
{
    char str[] = "Pawan", str2[] = "Avinash", str3[] = "Kumar";

    printf("The length of Pawan is %ld\n" ,strlen(str));
    return 0;
}