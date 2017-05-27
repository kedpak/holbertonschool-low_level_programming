#include <stdio.h>

/**
 * main - print the highest factorial of 612852475143
 * Return: 0
 */
int main(void)
{
	long a = 612852475143;
	long i = 0;
	long k;
	long m = 1;

	while (i <= a)
	{
		i++;
		if (a % i == 0 && m == 1 && i > 1)
		{
			m = a / i;
		}
		else if (a % i == 0 && m > 2 && i > 3)
		{
			k = m / i;
			break;
		}
	}
	printf("%li", k);
	putchar('\n');
	return (0);
}
