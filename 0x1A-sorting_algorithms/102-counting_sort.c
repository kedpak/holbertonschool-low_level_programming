#include  "sort.h"

/**
 * counting_sort - sorts an array of integers using counting algorithm
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: void function
 */
void counting_sort(int *array, size_t size)
{
	size_t m;
	unsigned int i;
	int j, k, max;
	int *count_array, *final_array;

	/* loop sets count_array and increments value by 1 for element */
	max = find_max(array, size);
	count_array = malloc(sizeof(int) * max);
	final_array = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= max; j++)
		{
			if (array[i] == j)
				count_array[j] += 1;
		}
	}
	/* adds up right index accumulatively */
	for (k = 0; k <= max; k++)
	{
		count_array[k + 1] += count_array[k];
		if (k < max)
			printf("%d, ", count_array[k]);
		else
			printf("%d\n", count_array[k]);
	}
	m = 0;
	for (j = 0; j <= max; j++)
	{
		if (count_array[j] > count_array[j - 1])
		{
			final_array[m] = j;
			m++;
			if (m > size)
				break;
		}
	}
	for (m = 0; m < size; m++)
		array[m] = final_array[m];
	free(count_array);
}


/**
 * find_max - finds the max integer of an array
 * @array: array to find the max integer in
 * @size: size of array
 * Return: integer that is highest in array
 */
int find_max(int *array, size_t size)
{
	size_t i;
	int max;

	if (!array || size == 0)
	{
		return (0);
	}
	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return (max);
}
