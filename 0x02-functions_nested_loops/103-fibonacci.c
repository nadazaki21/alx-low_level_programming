#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
	long  int i, last;
	long  int result = 2;
	long  int before_last = 1;
	long  int sum = 2;

	last = result;

	for (i = 2 ; i < n ; i++)
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
