#include <string.h>
/**
 * _strpbrk - unction locates the first
 * occurrence in the string s of any of the bytes in the string accept
 * @s: piinter to the string
 * @accept: pointer to tthe string that has accepted charecters
 * Return: Returns the number of found accepted chars in segment 1
 *
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int len_s = strlen(s);

	for (i = 0; i < len_s ; i++)
	{

		for (j = 0; j < 5; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
