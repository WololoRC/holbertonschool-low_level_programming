int _pow_recursion(int x, int y)
{
	int num;

	num = x;

	if (y < 0)
	{
		return -1;
	}

	else if (y != 0)
	{
		return (x * _pow_recursion(num, y - 1));
	}

}
