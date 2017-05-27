#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: input integer
 * Return: remainder
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n > 0)
	{
		_putchar(l + '0');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		l *= -1;
		_putchar(l + '0');
	}
	return (l);
}
