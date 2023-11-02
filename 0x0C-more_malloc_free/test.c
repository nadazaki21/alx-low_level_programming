#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr, *ptr2;

    char arr[4] = "hi";

    ptr = arr; 

    ptr2 = malloc(sizeof(char) * 3);

    ptr2 = ptr;

    printf("%s", ptr2);
}