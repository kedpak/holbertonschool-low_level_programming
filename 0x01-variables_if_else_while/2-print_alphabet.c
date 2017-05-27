#include <stdio.h>

/**
 * main - prints out the alphabet
 * Return: returns a strings of characters
 **/
int main(void)
{
	char alphabet = '`';
	int i;

	i = 0;

	while (i <= 25)
	{
		++alphabet;
		++i;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
