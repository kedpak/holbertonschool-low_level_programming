#include "sort.h"

/**
 * partition - sets a pivot point and reassigns all elments less than pivot
 * to left of pivot, and larger elements to right of pivot.
 * swaps pivot index with  pivot and end of function
 * @array: array to be sorted
 * @start: start of array
 * @end: end of array
 * @size: size of array
 * Return: returns int index of pivot index
 */
int partition(int *array, int start, int end, size_t size)
{
	int p_index, i, temp, temp2;
	int pivot;

	/* start is alway begining of array = 0 */

	pivot = array[end];
	p_index = start;
	for (i = start; i <= end - 1; i++)
	{

		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[p_index];
			array[p_index] = temp;
			p_index++;
		}

	}
	/* swaps the end index(pivot) with p_index */
	if (array[p_index] != array[end])
	{
		temp2 = array[p_index];
		array[p_index] = array[end];
		array[end] = temp2;
	}
	print_array(array, size);
	return (p_index);

}


/**
 * _quick - calls recursively based on the return valuse of partition
 * @array: array to be sorted
 * @start: start of array
 * @end: end of array
 * @size: array size
 * Return: void
 */
void _quick(int *array, int start, int end, size_t size)
{
	int p_index;

	if (start < end)
	{
		p_index = partition(array, start, end, size);
		_quick(array, start, p_index - 1, size);
		_quick(array, p_index + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers from lowest to highest
 * using quick sort algorithm: (Lomuto)
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int start;

	if (array == NULL || size <= 1)
	{
		return;
	}

	
	start = 0;
	_quick(array, start, size - 1, size);
}
