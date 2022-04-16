/*kjshdfjasldkfj
asdfjas;ldfkj
asdjfsdfjasdhjf
*/

#include <stdio.h>



void swap(int *pta, int *ptb)
{
    int c = *pta;
    *pta = *ptb;
    *ptb = c;
}

int main()
{
    int a = 5;
    int b = 7;

    swap(&a, &b);

    printf("a is %d\nb is %d", a, b);

    return 0;
}