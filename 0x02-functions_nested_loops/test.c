
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{



	int last_digit;

    int n =98 ; 
	last_digit = abs(n % 10);

_putchar(last_digit + '0');
	 n =0 ; 
	last_digit = abs(n % 10);
	_putchar(last_digit + '0');

	 n = -1024 ; 
	last_digit = abs(n % 10);



	//_putchar(last_digit + '0');


	
	printf ("%d", last_digit);
    


	



	return (0);
}
