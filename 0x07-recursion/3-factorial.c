#include "holberton.h"

/**
 * factorial - return factorial
 * @n: input number
 * Return: factorial of int
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
