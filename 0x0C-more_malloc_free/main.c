#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked-allocates memory
 * @b:amount in bytes
 *
 * Return:pointer to allocated memory
 * if malloc fails,status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc (b);
	if (c == NULL)
	exit(98);
	return (c);
}
