#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - itererate through array and call function pointer
 * @array: array to be itereated through
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
