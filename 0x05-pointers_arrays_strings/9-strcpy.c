#include <string.h>
/**
 * _strcpy - copy the string to the buffer
 * @dest: destination
 * @src: source
 * Return: the pointer to the buffer
*/
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0 ; i <= len ; i++)
	{
		*(dest + 1) = *(src + i);
	}

	return (&dest);

}
