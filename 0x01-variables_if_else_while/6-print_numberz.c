#include <stdio.h>

/**
 * main - print base 10 numbers
 * Return: 0
 **/
int main(void)
{
	int num = '0';
	int i = 0;

	while (i <= 9)
	{
		++i;
		putchar(num);
		++num;
	}
	putchar('\n');
	return (0);
}
