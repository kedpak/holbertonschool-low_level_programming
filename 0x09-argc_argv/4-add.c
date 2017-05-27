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
	int i, sum;
	unsigned int j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] == 0)
		{
			printf("0\n");
		}
		else
		{
			j = 0;
			while (j <= strlen(argv[i]))
			{
				if (argv[i][j] >= 48 && argv[i][j] <= 57 && j == strlen(argv[i]) - 1)
				{
					sum += atoi(argv[i]);
					break;
				}
				else if (argv[i][j] >= 48 && argv[i][j] <= 57 && j < strlen(argv[i]))
				{
					j++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
