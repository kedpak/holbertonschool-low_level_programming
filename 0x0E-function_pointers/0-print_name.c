#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name input string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	(*f)(name);
}
