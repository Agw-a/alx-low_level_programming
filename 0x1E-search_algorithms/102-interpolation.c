#include "search_algos.h"

/**
 * interpolate-recursively interpolate through array(search)
 * @array:array of values
 * @low:first index in array
 * @high:last index in array
 * @size:size of array
 * @value:value to locate in array
 * Return:index of value.
 */
int interpolate(int *array, size_t low, size_t high, size_t size, int value)
{
	size_t pos;
	int x;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (value == array[pos])
		return (pos);
	else if (value > array[pos])
		x = interpolate((array, pos + 1, high, size, value);
	else if (value < array[pos])
		x = interpolate((array, low, pos - 1, size, value);
	return (x);
}

/**
 * interpolation_search-searches for a value in a sorted array of integers
 * @array:pointer to the first element of the array to search
 * @size:number of elements in array
 * @value:the value to search
 * Return:index of value or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (interpolate((array, 0, size - 1, size, value));
}
