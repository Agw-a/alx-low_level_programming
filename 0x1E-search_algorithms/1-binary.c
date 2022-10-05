#include "search_algos.h"

/**
 * recursiveBinarySearch - a function that recursively searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: the array of integers
 * @first_idx: first index of the array
 * @last_idx: last index of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int recursiveBinarySearch(int *array, size_t first_idx, size_t last_idx,
		int value)
{
	size_t mid_idx;
	int x;

	if (!array || last_idx < first_idx)
		return (-1);
	printf("Searching in array: ");
	for (mid_idx = first_idx; mid <= last_idx; mid_idx++)
	{
		if (mid_idx != first_idx)
			printf(", ");
		printf("%d", array[mid_idx]);
	}
	printf("\n");
	mid_idx = (first_idx + last_idx) / 2;
	if (array[mid_idx] == value)
		return (mid_idx);
	else if (array[mid_idx] > value)
		x = (recursiveBinarySearch(array, first_idx, mid_idx - 1, value));
	else if (array[mid_idx] < value)
		x = (recursiveBinarySearch(array, mid_idx + 1, last_idx, value));
	return (x);
}

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
