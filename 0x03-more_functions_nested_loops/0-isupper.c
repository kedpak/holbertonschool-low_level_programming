#include "holberton.h"

/**
 * _isupper - returns 1 if upper case 0 if lower case
 * @c: integer of characeter argumetn
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
