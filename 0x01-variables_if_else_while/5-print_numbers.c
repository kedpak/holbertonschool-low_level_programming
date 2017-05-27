#include <stdio.h>

/**
 * main - function prints numbers of base 10
 * Return: return is 0
 **/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
