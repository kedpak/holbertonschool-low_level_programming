#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int alphabet = '{';
	int i = 0;

	while (i <= 25)
	{
		++i;
		--alphabet;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
