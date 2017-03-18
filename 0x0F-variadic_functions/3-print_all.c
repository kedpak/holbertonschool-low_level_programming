#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - print out integer, float, char, or string
 * @format: format string of input
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, k; va_list ap; char *str;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		k = 1;
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'e':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			else
			{
				printf("%s", str);
				break;
			}
		default:
			k = 0;
			break;
		}
		if (format[i + 1] != '\0' && k == 1)
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
