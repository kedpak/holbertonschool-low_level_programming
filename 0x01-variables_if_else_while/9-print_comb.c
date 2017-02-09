#include <stdio.h>

/**
 * main - print function that displays 0-9 in ascending order with ',' and ' '
 * Return: 0
 */
int main(void)
{
	int num, comma, space, i;

	num = '/';
	comma = ',';
	space = ' ';
	i = 0;

	while (i < 10)
	{
		++i;
		++num;
		putchar(num);
		if (i <= 9)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
