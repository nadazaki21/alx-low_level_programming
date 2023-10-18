#include <stdio.h>
#include <string.h>

int main() {

    int countersrc =0 ; 
    char arr [] = "hii";

    while (*(arr+countersrc) != '\0')
    {
            countersrc++;
    }

    printf("%d\n",countersrc);
    return 0;
}

