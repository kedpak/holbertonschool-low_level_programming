#include "holberton.h"
/**
 * _sqrt_recursion - return sqroot of integer
 * @n: integer to find square root of
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int m;

	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		m = 1;
		counter(m, n);
		return (counter(m, n));
	}
}

/**
 * counter - counts numbers that are square root accesible
 * @i: numbers to be squared
 * @k: number to be resulted by square
 * Return: squared number
 */
int counter(int i, int k)
{
	if (i * i == k)
	{
		return (i);
	}
	else if (i > k)
	{
		return (-1);
	}
	else
	{
		return (counter(i + 1, k));
	}
}
