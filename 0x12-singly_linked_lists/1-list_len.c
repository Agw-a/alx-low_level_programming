#include "lists.h"

/**
 * list_len-returns number of elements in linked list
 * @h:singly linked list
 * Return:0;
 */
size_t list_len(const list_t *h)
{
	int snodes = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
	snodes++;
	h = h->next;
	}
	return (snodes);
}
