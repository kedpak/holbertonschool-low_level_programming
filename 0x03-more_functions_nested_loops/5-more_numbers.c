#include "holberton.h"

/**
 * more_numbers - print 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char n = '0';

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
				if (i == 10)
				{
					n = '0';
				}
			}
			_putchar(n);
			n++;
		}
		n = '0';
		_putchar('\n');
	}
}
