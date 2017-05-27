#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers in argument with seperator
 * @separator: character placed between each integer
 * @n: numbers in parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
