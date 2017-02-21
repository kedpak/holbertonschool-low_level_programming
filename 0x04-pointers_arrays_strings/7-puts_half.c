#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int length, i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (i = 0; i < length / 2; i++)
		{
			_putchar(*(str + (length / 2)) + i);
		}
	}
	else if (length % 2 == 1)
	{
		for (i = 0; i < length / 2; i++)
		{
			_putchar(*(str + ((length - 1) / 2)) + i);
		}
	}

	_putchar('\n');
}
