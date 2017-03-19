#include "variadic_functions.h"

/**
 * p_char - print characters
 * @ch: input char
 * Return: void
 */
void p_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}

/**
 * p_num - print number
 * @num: input number
 * Return: void
 */
void p_num(va_list num)
{
	printf("%d", va_arg(num, int));
}

/**
 * p_float - print float
 * @fl: input float
 * Return: void
 */
void p_float(va_list fl)
{
	printf("%f", va_arg(fl, double));
}

/**
 * p_string - print string
 * @str: input string
 * Return: void
 */
void p_string(va_list str)
{
	char *string;

	string = va_arg(str, char *);
	if (string == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - print out integer, float, char, or string
 * @format: format string of input
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, k;
	va_list ap;
	char *separator;
	form_t data_types[] = {
		{"c", p_char},
		{"f", p_float},
		{"i", p_num},
		{"s", p_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = 0;
	separator = "";
	while (format[i] != '\0' && format)
	{
		k = 0;
		while (data_types[k].type != NULL)
		{
			if (data_types[k].type[0] == format[i])
			{
				printf("%s", separator);
				data_types[k].func(ap);
				separator = ", ";
			}
			k++;

		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
