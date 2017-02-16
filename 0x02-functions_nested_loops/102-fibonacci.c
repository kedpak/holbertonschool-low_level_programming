#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long i, n, k;

	n = 1;
	k = 2;
	for (i = 0; i < 25; i++)
	{
		if (i < 25)
		{
			printf("%li, ", n);
			if (i < 24)
			{
				printf("%li, ", k);
			}
			if (i < 25 && i > 23)
			{
				printf("%li", k);
			}
		}
		n = n + k;
		k = n + k;
	}
	putchar('\n');
	return (0);
}
