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
	static int address;

	for (i = 0 ; i <= len ; i++)
	{
		*(dest + i) = *(src + i);
	}

	address = &dest;
	return (address);

}
