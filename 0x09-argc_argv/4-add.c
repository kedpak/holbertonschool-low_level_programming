#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - functon adds numbers and prints sum
 * @argc: number of elements
 * @argv: input of strings
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, k, m, sum;
	unsigned int j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		m = 0;
		if (argv[i] == 0)
		{
			printf("0\n");
		}
		else
		{
			for (j = 0; argv[i][j] != '\0' && m == 0; j++)
			{
				for (k = 0; k < 10; k++)
				{
					if (argv[i][j] >= 48 && argv[i][j] <= 57)
					{
						sum += atoi(argv[i]);
						m = 1;
						break;
					}
					else
					{
						printf("Error\n");
						return (1);
					}
				}
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
