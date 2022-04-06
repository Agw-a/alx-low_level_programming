#include "main.h"

/**
 * _memset-fills memory with constant byte
 * @s:memory location
 * @n:bytes filled
 * @b:first byte
 * Return:pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) = b;
	return (s);
}
