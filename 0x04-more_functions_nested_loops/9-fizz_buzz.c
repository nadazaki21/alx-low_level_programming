#include <stdio.h>
/**
 * main - main method
 * Return: return zero on success
*/
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 99)
		{
			putchar(' ');
		}
	}
	return (0);
}
