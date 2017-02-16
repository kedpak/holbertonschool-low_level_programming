#include "holberton.h"

/**
 * print_numbers - prints 0 through 9
 * Return: 0
 */
void print_numbers(void)
{
	int i;
	char c;

	c = '0';
	for (i = 0; i < 10; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
