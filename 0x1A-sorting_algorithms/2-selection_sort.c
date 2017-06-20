#include "sort.h"

/**
 * selection_sort - sorts array of integers by swapping lowest to i index
 * @array: array with elements of integers
 * @size: size of array to sort
 * Return: void function
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int comp, count, flag;

	if (!array || size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		flag = 1; /* flag tells if an iteration needs a swap */
		comp = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < comp)
			{
				comp = array[j];
				count = j;
				flag = 2;
			}
			if (j == size - 1)
			{
				if (flag == 1)
				{
					break;
				}
				temp = array[i];
				array[i] = comp;
				array[count] = temp;
				print_array(array, size);
			}
		}
	}
}

