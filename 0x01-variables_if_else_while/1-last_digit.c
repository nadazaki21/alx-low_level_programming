#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	else if (n < 6)
	{

		printf("Last digit of %d is %d and is less than 6 and not 0\n"
		, n, last_digit);

	}

	else
	{
		printf("Last digit of %d is %d\n", n, last_digit);
	}

return (0);
}
