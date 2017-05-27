#include <stdio.h>

/**
 * main - print base 16 numbers
 * Return: 0
 */
int main(void)
{
	char alpha = '`';
	char num = '/';
	int i, j;

	while (i < 10)
	{
		++i;
		++num;
		putchar(num);
	}
	while (j <= 5)
	{
		++j;
		++alpha;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
