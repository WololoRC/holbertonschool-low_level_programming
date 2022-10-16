/**
 *_pow_recursion -performs the value of x raised to the power of y
 *
 *
 *@x: VAR
 *@y: VAR
 * Return: recursion
 */
int _pow_recursion(int x, int y)
{
	int num;

	num = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (x * (y == 0))
	{
		return (1);
	}

	else if (y == 0)
	{
		return (x);
	}

	return (num * _pow_recursion(x, y - 1));
}
