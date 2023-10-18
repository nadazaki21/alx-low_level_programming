#include <stdio.h>

int main(void)
{

    int counter = 0;
    char arr[] = "123";


    while (*(arr+counter) != '\0')
    {
       
            counter++;
        
    }

    printf("%d \n", counter);


}