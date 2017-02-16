#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int i, n, k;

	n = 1;
	k = 2;
	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%li, ", n);
			printf("%li, ", k);
		}
		if (i == 49)
		{
			printf("%li", n);
			printf("%li", k);
		}
		n = n + k;
		k = n + k;
	}
	putchar('\n');
	return (0);
}
