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

	jump = floor(sqrt(size));
	j = 0;
	max = size;
	if (array == NULL)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", 0, 0);
	for (i = 0; i <= size; i++)
	{
		if (array[jump] > value)
		{
			j = (jump - floor(sqrt(size)));
			max = jump;
			printf("Value found between indexes [%lu] and [%lu]\n", j, max);
			break;
		}
		j = jump - floor(sqrt(size));
		max = jump;
		if (array[jump] == value || jump > size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", j, max);
			break;
		}
		printf("Value checked array[%d] = [%lu]\n", array[jump], jump);
		jump += floor(sqrt(size));
	}
	for (; j <= max; j++)
	{
		if (j >= size)
			break;
		printf("Value checked array[%d] = [%lu]\n", array[j], j);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}

