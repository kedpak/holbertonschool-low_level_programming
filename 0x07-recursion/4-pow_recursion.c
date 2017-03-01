#include "holberton.h"

/**
 * _pow_recursion - return power of x to y
 * @x: number to be multiplied
 * @y: power
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
