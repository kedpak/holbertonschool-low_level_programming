#include "variadic_functions.h"

/**
 * p_char - print characters
 * @ap: input char
 * Return: void
 */
void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * p_num - print number
 * @ap: input number
 * Return: void
 */
void p_num(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * p_float - print float
 * @ap: input float
 * Return: void
 */
void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * p_string - print string
 * @ap: input string
 * Return: void
 */
void p_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
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
	char *separator;
	form_t data_types[] = {
		{"c", p_char},
		{"i", p_num},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};
	va_list ap;

	va_start(ap, format);
	i = 0;
	separator = "";
	while (format && format[i] != '\0')
	{
		k = 0;
		while (data_types[k].type != NULL)
		{
			if ((data_types + k)->type[0] == format[i])
			{
				printf("%s", separator);
				data_types[k].func(ap);
				separator = ", ";
			}
			k++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
