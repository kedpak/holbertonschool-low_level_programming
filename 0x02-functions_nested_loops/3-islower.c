#include "holberton.h"

/**
 * _islower - returns 1 if character is lowercase, 0 if not
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
