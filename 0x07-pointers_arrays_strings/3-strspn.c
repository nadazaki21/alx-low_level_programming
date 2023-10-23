#include <string.h>
/**
 * _strspn - Returns the number of bytes in the initial segment
 *  of s which consist only of bytes from accept
 * @s: piinter to the string
 * @accept: pointer to tthe string that has accepted charecters
 * Return: Returns the number of found accepted chars in segment 1
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	char delimeters[11] = {'.', ',', ' ', '\t', '\n', '\0', '-', '(', ')', '{', '}'};
	unsigned int i = 0;
	unsigned int j;
	unsigned int count = 0;
	unsigned int len_s = strlen(s);

	for (i = 0; i < len_s ; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (s[i] == delimeters[j])
			{
				return (count);
			}
		}

		for (j = 0; j < 5; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}

	return (count);
}
