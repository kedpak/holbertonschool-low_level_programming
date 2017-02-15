#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints integers that inrement or decrment to 98
 * @n: input integer
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	putchar('\n');
}
