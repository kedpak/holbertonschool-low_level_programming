#include <stdio.h>

/**
 * main - prints out lower and upper case alphabet
 * Return: returns 0
 **/
int main(void)
{
	char lowerCase = '`';
	char upperCase = '@';
	int i, j;

	i = 0;
	j = 0;

	while (i <= 25)
	{
		++lowerCase;
		++i;
		putchar(lowerCase);
	}
	while (j <= 25)
	{
		++upperCase;
		++j;
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
}
