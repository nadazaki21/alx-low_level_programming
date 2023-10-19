/**
 * _strcat - concatincates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest string after concatination
*/
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
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

	for (i = 0 ; i <= lensrc; i++)
	{
		*(dest + lendest + j) = src[i];
		j++;
	}
	return (dest);

}
