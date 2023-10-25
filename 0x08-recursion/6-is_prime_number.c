/**
 * check_prime - function cheks whether the numer is
 * prime or not
 * @n: the number to be checked
 * @smaller_number: the dividor number
 * Return: 0 is not prime, 1 if prime
*/
int check_prime(int n, int smaller_number)
{
	if (smaller_number < 2)
	{
		return (1);
	}
	else if ((n % smaller_number) == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, smaller_number - 1));
	}
}
/**
 * is_prime_number - function cheks whether the numer is
 * prime or not
 * @n: the number to be checked
 * Return: 0 is not prime, 1 if prime
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, n - 1));
	}
}
