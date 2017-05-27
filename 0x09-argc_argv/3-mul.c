#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple two arguments and print result
 * @argc: number of arguments
 * @argv: strings of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, num;

	num = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			num *= atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
