/**
 * _strcmp - strings comaprison
 * @s1: string 1
 * @s2: strig 2
 * Return: the difference between the difference char
*/
int _strcmp(char *s1, char *s2)
{
	int i, len;
	int lenS1 = 0, lenS2 = 0;

	while (*(s1 + lenS1) != '\0')
	{
		lenS1++;
	}
	while (*(s2 + lenS2) != '\0')
	{
		lenS2++;
	}
	/* find the shorter of the 2 strings*/
	if (lenS1 > lenS2)
	{
		len = lenS2;
	}
	else if (lenS1 < lenS2)
	{
		len = lenS1;
	}
	else
	{
		len = lenS1; /* two lenghts are equal*/
	}
	for (i = 0; i < len; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return ((s1[i] - s2[i]));
		}
	}
	if (lenS1 == lenS2)
		return (0);
	else if (lenS1 > lenS2)
		return ((int)(*(s1 + len + 1)));
	else
		return ((int)((*(s2 + len + 1))) * -1);
}
