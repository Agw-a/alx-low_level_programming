#include "lists.h"

/**
 * listint_len-returns the number of elements in a linked list
 * @h:links in the list
 *
 * Return:number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t snodes = 0;

	while (h != NULL)
	{
	h = h->next;
	snodes++;
	}
	return (snodes);
}
