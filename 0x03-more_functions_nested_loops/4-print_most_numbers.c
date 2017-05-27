#include "holberton.h"

/**
 * print_most_numbers - prints 0 - 9 excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;
	char n = '0';

	for (i = 0; i < 10; i++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
