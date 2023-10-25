/**
 * sqrt_helper - checks if the number is
 * @n: number for which I wil find the sqaure root
 * @guess: the number that might be the sqaure root
 * Return: the result, either -1 if no sqaure
 * or the result of the sqaure
*/
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n) {
        return guess;
    } else if (guess * guess > n) {
        return -1;  
    } else {
        return sqrt_helper(n, guess + 1);
    }
}

/**
 * _sqrt_recursion - checks if the number is
 * @n: number for which I wil find the sqaure root
 * Return: the result, either -1 if no sqaure
 * or the result of the sqaure
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}
