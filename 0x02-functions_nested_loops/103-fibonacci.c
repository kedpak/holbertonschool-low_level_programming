#include <stdio.h>

/**
 * main - print sum of fibonacci numbers divisible by 2
 * Return: 0
 */
int main(void)
{
	long i, n, k, m, l, t;

	n = 1;
	k = 2;
	m = 0;
	l = 0;
	for (i = 0; i < 16; i++)
	{
		if (n % 2 == 0)
		{
			m = n;
		}
		if (k % 2 == 0)
		{
			l = k;
		}
		n = n + k;
		k = n + k;
		t = t +  m + l;
		m = 0;
		l = 0;
	}
	printf("%li", t);
	putchar('\n');
	return (0);
}
