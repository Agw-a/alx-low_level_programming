#include "main.h"
#include <stdli.h>

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
	cl = malloc(size of(c) * size);
	if (size == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	cl[i] = c;
	return (c);
}	
