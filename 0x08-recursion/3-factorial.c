#include "main.h"
/**
 *factorial - function that return n factorial
 *
 *@n: given nember
 *Return: return -1 if number less than 0, 1 if number 0
 *and n factorial if number greter than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
