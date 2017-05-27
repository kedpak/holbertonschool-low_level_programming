#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int length, i, n, j;

	length = 0;
	n = 0;
	j = 1;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = 0; i < length / 2; i++)
		{
			_putchar(*(str + (length / 2) + n));
			n++;
		}
	}
	else if (length % 2 == 1)
	{
		for (i = 0; i < length / 2 ; i++)
		{
			_putchar(*(str + (length / 2) + j));
			j++;
		}
	}

	_putchar('\n');
}
