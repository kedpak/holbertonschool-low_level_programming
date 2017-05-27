#include "holberton.h"

/**
 * print_diagonal - prints diagonal line based on argument
 * @n: integer argument to determine lenght of diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	char s;

	i = 1;
	j = 1;
	s = ' ';
	while (i <= n)
	{
		if (n > 1 && i >= 2)
		{
			while (j < i)
			{
				_putchar(s);
				j++;
			}
		}
		j = 1;
		_putchar('\\');
		i++;
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
