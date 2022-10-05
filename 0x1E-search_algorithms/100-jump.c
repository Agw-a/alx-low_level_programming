#include "search_algos.h"
#include <math.h>
/**
 * jump_search-searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size:number of elements in array
 * @value:value to search for
 * Return:first index where value is located or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, idx;

	jump = (size_t)sqrt(size);
	if (!array)
		return (-1);
	for (idx = 0; idx < size; idx += jump)
	{
		printf("Value checked array[%ld] = [%ld]\n", idx, array[idx]);
		if (value == array[idx]
			|| ((idx + jump >= size)
			|| (value == array[idx + jump]))
			|| (value > array[idx] && value < array[idx + jump]))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					idx, idx + jump);
			for (i = idx; i < size && i <= idx + jump; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
