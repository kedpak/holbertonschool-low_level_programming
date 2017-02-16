#include "holberton.h"

/**
 * print_line - prints line length based on n argument
 * @n: integer argument to indicate line length
 * Return: void
 */
void print_line(int n)
{
	char a = '_';
	int i;
        
	i = 1;

	while (i <= n)
	{
		_putchar(a);
		i++;
	}
	_putchar('\n');
}
