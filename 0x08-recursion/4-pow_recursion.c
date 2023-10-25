/**
 * _pow_recursion - returns x to the power of y
 * @x: the base
 * @y: the power
 * Return: the result of x poer y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y != 0)
		{
			y--;
			return (x * _pow_recursion(x, y));
		}
		else
		{
			return (1);
		}
	}
}
