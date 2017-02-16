#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: integer input
 * Return: 0
 */
void print_times_table(int n)
{
	int j, k, i;

	if (n < 16)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				k = i * j;
				if (i == 0)
				{
					_putchar((k % 10) + '0');
				}
				if (k >= 100)
				{
					_putchar(','); _putchar(' ');
					_putchar((k / 100) + '0'); _putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				if (k >= 10 && k < 100)
				{
					_putchar(','); _putchar(' ');
					_putchar(' '); _putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				if (k < 10 && i > 0)
				{
					_putchar(','); _putchar(' ');
					_putchar(' '); _putchar(' ');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
