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
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
        {
            if ((argv[i][j]) < 48 || (argv[i][j] > 57))
            {
                printf("Error\n");
                return 1;
            }
        }

        sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}


