#include  "sort.h"

/**
 * counting_sort - sorts an array of integers using counting algorithm
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: void function
 */
void counting_sort(int *array, size_t size)
{
	unsigned int i, p;
	int j;
	int max = find_max(array);
	int *count_array = malloc(sizeof(int) * max);

	/* loop determines the size of counting array */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= max; j++)
		{
			if (array[i] == j)
				count_array[j] += 1;
		}
	}

	/* adds up right index accumaltively */
	p = 0;
	for (j = 0; j <= max; j++)
	{
		count_array[j + 1] += count_array[j];
		if (j < max)
			printf("%d, ", count_array[j]);
		else
		{
			printf("%d\n", count_array[j]);
		}
		for (i = p; i < size; i++)
		{
			if (count_array[j] > count_array[j - 1])
			{
				array[i] = j;
				p += 1;
				break;
			}
		}
	}

}


/**
 * find_max - finds the max integer of an array
 * @array: array to find the max integer in
 * Return: integer that is highest in array
 */
int find_max(int *array)
{
	unsigned int i;
	int max;

	max = array[0];
	for (i = 0; i <= sizeof(array); i++)
	{
		if (array[i + 1] == '\0')
			break;
		if (max < array[i + 1])
		{
			max = array[i + 1];
		}
	}

	return (max);
}
