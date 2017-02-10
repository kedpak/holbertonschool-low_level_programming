#include <stdio.h>

/**
 * main - prints numbers 0-99 with two digits, but disallows double digits, and pairs that were already printed
 * Return: 0
 */
int main(void)
{
	int num1, num2, comma, space, i, p;

	num1 = '0';
	num2 = '/';
	comma = ',';
	space = ' ';
	i = 0;
	p = '2';
	while (i < 45)
	{
		++i;
		++num2;
		if (num2 > '9')
		{
			num2 = p; /*placed '2' into variable p, to rep increase in num print which disallows duplicate pair*/
			++num1;
			++p;
		}
		if (num1 == num2)
		{
			++num2;
		}
		putchar(num1);
		putchar(num2);
		if (i < 45)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
