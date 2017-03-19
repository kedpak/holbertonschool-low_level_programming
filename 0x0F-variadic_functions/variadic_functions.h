#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct print_type
{
	char *type;
	void (*func)();
}form_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list ch);
void p_num(va_list num);
void p_float(va_list fl);
void p_string(va_list str);
#endif
