#include <stdio.h>

/**
 * main - print numbers with 3 digits
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;

		}
		i++;
	}
	return (0);
}
