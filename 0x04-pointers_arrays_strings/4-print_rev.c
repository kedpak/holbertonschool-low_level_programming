#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
