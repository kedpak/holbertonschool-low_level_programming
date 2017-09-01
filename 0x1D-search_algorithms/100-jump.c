#include "search_algos.h"

/**
 * jump_search - searches for a value in sorted array with jump search
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: integer value to be searched for inside of array
 * Return: integer index at which value is found, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, j, max;

	jump = 0;
	j = 0;
	max = 0;
	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (i == 0)
		{
			jump = floor(sqrt(size));
			printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		}
		j = jump - floor(sqrt(size));
		max = jump;
		if (array[jump] == value || jump > size || array[jump] > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", j, max);
			break;
		}
		jump += floor(sqrt(size));
	}
	for (; j <= max; j++)
	{
		if (j >= size)
			break;
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}

