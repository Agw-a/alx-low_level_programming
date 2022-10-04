#include "search_algos.h"


/**
 * find_val:recursively find a value in an array
 * @low:lower half of array
 * @high:higher array index
 * @value:value to search for
 * Return:-1 if value is not found or index of value
 */
int find_val(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	int i;

	if (!array || low > high)
		return (-1);
	printf("Searching in array: ");
	for (mid = low; mid <= high;mid++)
	{
		if (mid != low)
			printf(", ");
		printf("%ld", array[mid]);
	}
	printf("\n");
	mid = (low + high) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		i = (find_val(array, low, mid - 1, value));
	else if(array[mid] < value)
		i = (find_val(array, high, mid + 1, value));
	return(i);
}
/**
 * binary_search-function that searches for a value in a sorted array of integer
 * @array:pointer to first element of array
 * @size:number of elements in array
 * @value:value to search for
 * Return:index where value is located or -1 if array is null
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (find_val(array, 0, size - 1, value));
}
