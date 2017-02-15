#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, n, k;

	n = 0;
	k = 0;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar((n % 10) + '0');
			n = n + k;
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i >= 9)
			{
				break;
			}
			if (n <= 9)
			{
				_putchar(' ');
			}
			else if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
		}
		n = 0;
		k++;
		_putchar('\n');
	}
}
