#include "search_algos.h"


/**
 * linear_search- searches for a value in an array of integer
 * @array:pointer to the first element of the array
 * @size:number of elements
 * @value:value to search for
 * Return:first index of value of -1 if it does not exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
