#include <stdio.h>

/**
 * main - prints sum of all number below 1024 multiple of 5
 * Return: 0
 */
int main(void)
{
	int i, n;

	n = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = i + n;
		}
	}
	printf("%d\n", n);
	return (0);
}
