/**
 * _strncpy - copies string to n vharecter to destination
 * @dest: destination
 * @src: src
 * @n: number of charecters to be copied
 * Return: tthe pointer to the copies string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int countersrc = 0;

	static char *ptr;

	while (*(src + countersrc) != '\0')
	{
		countersrc++;
	}

	if (countersrc >= n)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else  /* src is less than the allowed len*/
	{
		for (i = 0; i < (countersrc); i++)
		{
			dest[i] = src[i];
		}
	}

	ptr = dest;

	return (ptr);

}
