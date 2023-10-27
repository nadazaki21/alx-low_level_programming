#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of arguments in command of running
 * the proram
 * @argv: the actull paarmeters if the running command
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
