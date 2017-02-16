#include <stdio.h>

/**
 * main - prints 1-100, if multiple of 3 Fizz, multiple of 5 Buzz
 * if multiple of 3 and 5 FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i, k;

	k = 1;
	for (i = 0; i < 100; i++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", k);
		}
		k++;
	}
	putchar('\n');
	return (0);
}
