#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments in command of running
 * the proram
 * @argv: the actull paarmeters if the running command
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
	}

	printf("%d\n", sum);

	}

	return (0);
}
