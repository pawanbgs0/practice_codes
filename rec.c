// Write a recursive function to print numbers upto n in reverse order;

// if n = 5
// print:
//     5 4 3 2 1;

#include <stdio.h>

void display_rev(int N)
{  
    if (N == 0)
        return;

    printf("%d ", N);
    display_rev(N - 2); // this is solved by harry
}


void display(int N)
{
    if (N == 0)
        return;

    display(N - 1); // this is solved by Harry
    printf("%d ",N);
}



int main()
{
    display(10);
    return 0;
}