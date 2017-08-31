#include "search_algos.h"

/**
 * binary_search - search through sorted array to find value at index
 * @array: pointer to first element of an array
 * @size: size of the array to search through
 * @value: integer value to search for inside of array
 * Return: index at value is found, or returns -1 at failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, middle, last;

	last = size - 1;
	middle = last / 2;

	if (array == NULL || value < 0)
	{
		return (-1);
	}
	i = 0;
	print_array(i, size);
	while (i <= last)
	{
		if (array[middle] < value)
		{
			i = middle + 1;
			print_array(i, last + 1);
		}
		else
		{
			last = middle;
			print_array(i, last + 1);
			for (j = 0; j < middle; j++)
			{
				if (array[j] == value)
					return (j);
			}
		}
		if (array[i] == value)
			return (i);
		middle = (last + i) / 2;
	}
	return (-1);
}

/**
 * print_array - prints the array from current to last
 * @num: index where array will start at
 * @size: size of array
 * Return: void
 */
void print_array(size_t num, size_t size)
{
	printf("Searching in array: ");
	for (num = num; num < size; num++)
	{
		if (num < size - 1)
			printf("%lu, ", num);
		else
			printf("%lu\n", num);
	}
}
