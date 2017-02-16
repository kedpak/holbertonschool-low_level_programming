#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i, n, k;

	n = 1;
	k = 2;
	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%d, ", n);
			printf("%d, ", k);
		}
		if (i == 49)
		{
			printf("%d", n);
			printf("%d", k);
		}
		n = n + k;
		k = n + k;
	}
	putchar('\n');
	return (0);
}
