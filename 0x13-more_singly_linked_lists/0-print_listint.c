#include "lists.h"

/**
 * print_listint-prints all elements of a linked list
 * @h:linked list
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t snodes;

	snodes = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	snodes++;
	}
	return (snodes);
}
