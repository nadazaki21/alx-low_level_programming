#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments in command of running
 * the proram
 * @argv: the actull paarmeters if the running command
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 0; i < argc; i++)
	{
		if ((atoi(argv[i]) > 48) && (atoi(argv[i]) < 57))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}


