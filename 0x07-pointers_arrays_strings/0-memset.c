/**
 * _memset - function to fill n memory byted with constant
 * @s: pointer to ememory blck to be filled
 * @b: const ti fill memeory byted with
 * @n: size of memory to be filled
 * Return: th epointer to the block of memeopry
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  i = 0;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
