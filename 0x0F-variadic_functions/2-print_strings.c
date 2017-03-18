#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings passed through arguments
 * @separator: character to place between strings
 * @n: number of strings to pass in argument
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
