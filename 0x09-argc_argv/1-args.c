#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: number of strings
 * Return: zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	if (argc < 2)
	{
		printf("%d\n", i);
	}
	if (argc > 1)
	{
		while (i < argc)
		{
			i++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
