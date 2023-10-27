/**
 *  _memcpy - copies  memory block to another memory block
 * @dest: destination block
 * @src: source block
 * @n: size of memory to be copied
 * Return: pointer to dest block
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
