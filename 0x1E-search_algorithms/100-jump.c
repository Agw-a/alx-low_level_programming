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
	size_t jump, i, index;

	jump = (size_t)sqrt(size);
	if (!array)
		return (-1);
	for (index = 0; index < size; index += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index]
			|| ((index + jump >= size)
			|| (value == array[index + jump]))
			|| (value > array[index] && value < array[index + jump]))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					index, index + jump);
			for (i = index; i < size && i <= index + jump; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
