#include <stdio.h>
#include <stdlib.h>
/**
 * 
*/
int *array_range(int min, int max)
{
    int *ptr, i, num;

    if (min > max)
    {
        return (NULL);
    }
    
    ptr = malloc(sizeof(int) * (max -  min + 2));
    if (ptr == NULL)
    {
        return (NULL);
    }
    
    num = min;

    for (i = 0; i <  (max -  min + 2); i++)
    {
        ptr[i]= min;
        min++;
    }
    
    return (ptr);
}