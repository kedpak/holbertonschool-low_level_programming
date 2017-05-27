#include "holberton.h"

/**
 * _abs - finds absolute value of int
 * @c: input integer
 * Return: absolute value of in
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		c *= -1;
		return (c);
	}
	else
	{
		return (0);
	}
}
