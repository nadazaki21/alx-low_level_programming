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
            result = i * j ; 
			printf("%d", result);
            _putchar(',');
            _putchar('  ');

		}

        _putchar('\n');
        
	}
}
