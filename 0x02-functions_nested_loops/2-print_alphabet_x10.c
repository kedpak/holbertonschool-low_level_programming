#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet a-z 10 times with a newline
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, j;
	char alpha = 'a';

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		_putchar('\n');
	}
}
