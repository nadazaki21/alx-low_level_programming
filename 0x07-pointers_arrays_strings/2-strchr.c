/**
 * _strchr - find the first occurence of a char in a string,
 * and then prints the rest of string
 * @s: pointer to string
 * @c: char we search for
 * Return: returns the address for the first occurence for
 * the char int he string
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[0] == '\0')
	{
		return (s);
	}
	

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}

	return ('\0');
}
