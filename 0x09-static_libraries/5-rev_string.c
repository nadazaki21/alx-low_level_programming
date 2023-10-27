#include <string.h>
/**
 * rev_string - reverse the sting
 * @s: pointer to sting to be reversed
*/
void rev_string(char *s)
{
	int len = strlen(s);
	int temp[1000];
	int i;
	int j;

	j = 0;
	for (i = len - 1 ; i >= 0 ; i--)
	{
		temp[j] = *(s + i);
		j++;
	}

	for (i = 0 ; i < len ; i++)
	{
		*(s + i) = temp[i];

	}
}
