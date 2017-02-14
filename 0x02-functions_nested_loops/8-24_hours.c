#include "holberton.h"

/**
 * jack_bauer - prints 24 hour clock all times
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			b++;
			if (a == 2 && b == 4)
			{
				break;
			}
		}
		a++;
	}
}
