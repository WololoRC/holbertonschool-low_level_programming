#include "main.h"
/**
 *is_prime_number - check if n < 1 and  if not call prime checker
 *
 *@n: prime NUM?
 *
 * Return: recursion
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	else if (prime_checker(n, n / 2) > 0)
	{
		return (1);
	}

	return (0);
}
/**
 *prime_checker -checks for prime
 *
 *@n: NUM
 *@x: hardcode: see if the result of division is int or irratioanl
 *
 *Return: recursion
 */
int prime_checker(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}

	if (n % x == 0)
	{
		return (0);
	}

	else
	{
		return (prime_checker(n, x - 1));
	}
}
