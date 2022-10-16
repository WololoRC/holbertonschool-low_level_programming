#include "main.h"
/**
 *_sqrt_recursion -checks if n is negative and call recursion
 *
 *@n: NUM to square
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squareroot(n, (n + 1) / 2));
	}
}
/**
 *squareroot -Cheks for irrational and make the maths
 *
 *@n: NUM to square
 *@x: find the square
 * Return: recursion.
 */
int squareroot(int n, int x)
{
	if (x < 1)
		return (-1);

	else if (x * x == n)
	{
		return (x);
	}

	else
	{
		return (squareroot(n, x - 1));
	}
}
