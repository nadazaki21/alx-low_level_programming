#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1 ; i < 1024 ; i++)
	{
		if ((1024 % i) == 0)
		{
			sum = sum + i;
		}
	}

	return (0);
}
