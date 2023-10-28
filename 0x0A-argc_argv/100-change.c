#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: number of arguments in command of running
 * the proram
 * @argv: the actull paarmeters if the running command
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int all_coins_number = 0, input, i = 0;
	int coin_values[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{	char *input_str = argv[1];

		while (*input_str)
		{
			if (!isdigit(*input_str))
			{
				printf("Error\n");
				return (1);
			}
			input_str++;
		}

		input = atoi(argv[1]);

		while (input > 0)
		{
			if (input >= coin_values[i])
			{
				input = input - coin_values[i];
				all_coins_number++;
			}
			else
			{
				i++;
			}
		}
	}
	printf("%d", all_coins_number);
	return (0);
}
