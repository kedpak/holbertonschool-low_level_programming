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
	size_t first, middle, last;

	last = size - 1;
	middle = last / 2;

	if (array == NULL)
	{
		return (-1);
	}
	first = 0;
	if (last == 1)
	{
		return (array[first]);
	}
	print_array(array, first, size);
	while (first <= last)
	{
		if (array[middle] < value)
		{
			first = middle + 1;
			print_array(array, first, last + 1);
		}
		else if (array[middle] == value)
		{
			return (array[middle]);
		}
		else
		{
			last = middle;
			print_array(array, first, last + 1);
		}
		middle = (last + first) / 2;
	}
	return (-1);
}

/**
 * print_array - prints the array from current to last
 * @num: index where array will start at
 * @size: size of array
 * @array: array to iterate and print elements of
 * Return: void
 */
void print_array(int *array, size_t num, size_t size)
{

	int flag;

	flag = 0;
	for (num = num; num < size; num++)
	{
		if (num < size - 1)
		{
			if (flag == 0)
			{
				printf("Searching in array: ");
				flag = 1;
			}
			printf("%d, ", array[num]);
		}
		else
		{
			if (flag == 0)
			{
				printf("Searching in array: ");
				flag = 1;
			}
			printf("%d\n", array[num]);
		}
	}

}
