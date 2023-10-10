#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long  int last;
	long  int result = 2;
	long  int before_last = 1;
	long  int sum = 2;

	last = result;

	while (result < 4000000)
	{
		result = last + before_last;
		before_last = last;
		last = result;

		if ((result % 2) == 0)
		{
			sum = sum + result;

		}
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
