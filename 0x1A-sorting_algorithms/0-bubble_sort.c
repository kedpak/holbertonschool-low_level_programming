#include "sort.h"

/**
 * bubble_sort - sorts array of integers from smallest to argest
 * @array: pointer to array to be sorted
 * @size: size of the array/number of element inside array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (!array)
	{
		return;
	}

	if (size <= 1)
	{
		return;
	}

	i = 0;
        j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			i++;
		}
		j++;
	}

}
