/**
 * _strncat - function to concatinate 2 stringgs to n bytes max
 * @dest: dest string
 * @src: source string
 * @n: max number of bytes
 * Return: pointer to dest string after edit
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int lendest = 0, lensrc = 0;

	/* get the length of both strings without the null char*/
	while (*(dest + lendest) != '\0')
	{
		lendest++;
	}

	while (*(src + lensrc) != '\0')
	{
		lensrc++;
	}

	if (n < lensrc)
	{
		j = 0;

		for (i = 0 ; i <= lensrc; i++)
		{
			*(dest + lendest + j) = src[i];
			j++;
		}
		for (i = lendest + j; i < n; i++)
		{
			*(dest + lendest + j) = '\0';
			j++;
		}
		

	}
	else
	{
		j = 0;

		for (i = 0 ; i < n; i++)
		{
			*(dest + lendest + j) = src[i];
			j++;
		}

	}


	return (dest);
}
