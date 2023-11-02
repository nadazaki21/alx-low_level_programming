#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main method
 * @argc: number of arguments
 * @argv: the arguments of main function
 * Return: 0 on success, other on failure
*/
int main(int argc, char **argv)
{
	int i, j, result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]))
			{
				j++;
			}
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
