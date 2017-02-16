#include "holberton.h"

/**
 * _isdigit - checks if c is digit
 * @c: input argument
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
