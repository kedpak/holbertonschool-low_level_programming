#include  "sort.h"

void counting_sort(int *array, size_t size)
{
	int k, count, count_num;
	int array2[100]; /*array with elements from min to max */
	int count_array[100];
	unsigned int i, m;
	int flag;

	/* loop assigns each element of array from min to max */

	for (i = 0; i <= 100; i++)
	{
		array2[i] = 0;
		printf("array2: %d\n", array2[i]);
	}

	k = 0;
	for (m = 0; m <= 10; m++)
	{
		printf("array ele: %d\n", array[m]);
		k = 0;
		while (k < 100)
		{
			if (array[m] == k)
			{
				array2[k] += 1;
			}
			k++;
		}

	}

	count = 0;
	count_num = 0;
	flag = 0;
	for (m = 1; m <= 100; m++)
	{
		if (flag == 1)
		{
			count++;
		}
		flag = 0;
		count_num += array2[m];
		count_array[m] = array2[m] + count_num;
		printf("count array: %d\n", count_array[m]);
		if (count_array[m] != count_num )
		{
			continue;
			flag = 1;
		}
		printf("countss: %d ,", count);
	}

	printf("%d\n", count_array[0]);
	
	

	for (k = 0; k <= 100; k++)
	{
		printf("element: %d   count: %d\n", k, array2[k]);
	}


	printf("size: %lu\n", size);
}


int find_min(int *array)
{
	unsigned int i;
	int min;

	min = array[0];
	for (i = 0; i <= sizeof(array); i++)
        {
		if (array[i + 1] == '\0')
			break;
                if (min > array[i + 1])
                {
			min = array[i + 1];
                        i = 0;
                }
        }
	printf("min: %d\n", min);
	return (min);
}


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
