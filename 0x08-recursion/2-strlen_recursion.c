/**
 * _strlen_recursion - prints the length of the string
 * @s: pointer to string
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}

	else
	{
		return (0);
	}
}

