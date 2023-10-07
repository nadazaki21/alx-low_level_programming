#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * The program assign a random value and checks its sign
 * Return:The program returns 0 as  sucessful excution
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is posiitve\n", n);
	}

	else if (n < 0)
	{

		printf("%d is negative\n", n);

	}

	else
	{
		printf("%d is zero\n", n);
	}

return (0);
}
