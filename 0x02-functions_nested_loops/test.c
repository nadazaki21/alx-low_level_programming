#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"


int main()
{   
    int i;
	int j;
    int result; 

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
            result = i * j;
            
            if(result > 9 && j != 0 )
            {
                putchar(' ');
                printf("%d", result);
                
            }
            else
            {
                putchar(' ');
                putchar(' ');
                printf("%d", result);
                
            }

            if(j != 9)
            {
                putchar(',');  
            }

		}

        putchar('\n');
        
	}
}
