#include <ctype.h>
#include <stdio.h>
#include "main.h"
#include "putchar.c"


// int main()
// {
// 	int j;
// 	int i;

// 	for (j = 0; j < 10; j++)
// 	{
		
// 		for (i = 0 ; i < 15 ; i++)
// 		{
			
// 			printf("%d",i);

		
// 		}

// 	_putchar('\n');
    
// 	}
// 	return (0);
// }

int main()
{
 	int i, j, k; /* three counters*/
	int space, hash;
	int size = 10;

	space = size - 1;
	hash = 1;

	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= space ; j++)
			{
				_putchar(' ');
			}

			for (k = 0; k < hash ; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
			space--;
			hash++;

		}

	}


    return 0;
}
