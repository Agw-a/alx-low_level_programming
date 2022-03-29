#include "main.h"

/**
 * _memcpy-copies memory area.
 * @dest:desination memory location
 * @src:source memory location
 * @n:bytes filled
 * return:ponter to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(dest + i) = *(src + i);
	return (dest);
}
