#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "3-calc.h"

/**
 * main - prints result of operator problem
 * @argc: number of inputs
 * @argv: input strings
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	k = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", k);
	return (0);
}
