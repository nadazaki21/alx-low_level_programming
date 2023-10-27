/**
 * leet - encodes in 133377
 * @n: pointer to string
 * Return: the pointer to the string
*/
char *leet(char *n)
{
	int i = 0;
	int j;

	char cap_letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char small_letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	while (*(n + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(n + i) == cap_letters[j] || *(n + i) == small_letters[j])
			{
				*(n + i) = numbers[j];
			}
		}
		i++;
	}
	return (n);
}

