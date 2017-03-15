#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return index of matching number
 * @array: arry of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: ith element of array, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		if (size <= 0)
		{
			return (-1);
		}
	}
	return (-1);
}
