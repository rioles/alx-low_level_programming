#include "main.h"
/**
 *_prim_number - function that evaluate if number
 * is prime from 1 to n
 *
 *@a: same numer as n
 *@b: numbert that iterate from to to n
 *
 *Return: 0 if number if n%b == 0 and 1 else
 */
int _prim_number(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (_prim_number(a, b + 1));
	}
	return (0);
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prim_number(n, 2));
}
