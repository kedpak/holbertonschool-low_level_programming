#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all integers in the parameter
 * @n: number of arguments to be passed
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int k = 0;
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		k += va_arg(ap, int);
	}
	va_end(ap);
	return (k);
}
