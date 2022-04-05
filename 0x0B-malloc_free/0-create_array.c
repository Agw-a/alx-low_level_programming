#include "main.h"
#include <stdlib.h>

/**
 * create_array-creates an array of chars.
 * @size:size of an array.
 * @c:stored char.
 *
 * Return:a pointer to the array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *cl;
	unsigned int i;

	if (size == 0)
	return (NULL);
	cl = malloc(sizeof(c) * size);
	if (cl == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	cl[i] = c;
	return (cl);
}	
