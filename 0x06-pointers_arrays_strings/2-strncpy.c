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

	static char *ptr;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	ptr = dest;

	return (ptr);

}
