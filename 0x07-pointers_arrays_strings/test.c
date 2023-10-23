#include <stdio.h>

int main(void)
{
    int x = 4; 

    int *ptr = &x;

    int **ptr2 = &ptr; // ptr contains an address , *ptr 


    printf("%d \n", **ptr2);

    return 0;
}

