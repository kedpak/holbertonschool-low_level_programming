#include <stdio.h>

/**
 * main - prints numbers 0-99 with two digits
 * Return: 0
 */
int main(void)
{
	int num1, num2, comma, space, i;

	num1 = '0';
	num2 = '/';
	comma = ',';
	space = ' ';
	i = 0;
	while (i < 100)
	{
		++i;
		++num2;
		if (num2 > '9')
		{
			num2 = '0';
			++num1;
		}
		putchar(num1);
		putchar(num2);
		if (i < 100)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
