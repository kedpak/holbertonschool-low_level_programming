#include "holberton.h"

/**
 * print_alphabet - prints characters a-z
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 0;
	char alpha = 'a';

	while (i < 26)
	{
		i++;
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
