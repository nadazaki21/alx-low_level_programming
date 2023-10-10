
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* jack_bauer - checking if the ltter is lower case or not
* Return: if it is lower case it will return 1, other than
* that is it is a ccapital
* letter or is a number it will return 0
*/

void jack_bauer(void)
{
	int i;
	int j;
    int result; 

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
            result = i * j ; 
			printf("%d", result);
            putchar(',');
            putchar('  ');

		}

            putchar('\n');
        
	}

}

