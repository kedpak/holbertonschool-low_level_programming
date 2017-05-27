#include "holberton.h"

/**
 * _isalpha - returns 1 if character is alphabet, 0 if not
 * @c: integer input
 * Return: 1 if lowercase, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
