#include "holberton.h"

/**
 * print_binary - print binary version of decimal integer
 * @n: input integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int k;

	k = n;

	if (n == 0)
	{
		_putchar('0');
	}
	while (k > 0)
	{
		if ((n & k) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		k = k >> 1;
	}
}
