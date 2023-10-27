#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: number of arguments in command of running
 * the proram
 * @argv: the actull paarmeters if the running command
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	(void)argc;
	int result;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		result = atoi((argv[1])) * atoi((argv[2]));
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}

	
	return (0);
}
