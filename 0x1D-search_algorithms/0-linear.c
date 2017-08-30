#include "search_algos.h"

/**
 * linear_search - search for value inside array
 * @array: pointer to current element of array
 * @size: size of the array to search value
 * @value: integer value to be searched for
 * Return: return first index where value is located
 * returns -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
