#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: integer to add
 * @b: next integer to add
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtract two integers
 * @a: integer to subtract from
 * @b: next integer to subtract
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - multiply two integers
 * @a: integer to multiply
 * @b: next integer to multiply
 * Return: product of the two int arguments
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - divide two integers
 * @a: first integer to divide
 * @b: second integer to divide
 * Return: result of division of two integers
 */
int op_div(int a, int b)
{
	int result;

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}

/**
 * op_mod - modulo two integers
 * @a: first integer to mod
 * @b: second integer to mod
 * Return: result of modularized numbers
 */
int op_mod(int a, int b)
{
	int remainder;

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	remainder = a % b;
	return (remainder);
}
