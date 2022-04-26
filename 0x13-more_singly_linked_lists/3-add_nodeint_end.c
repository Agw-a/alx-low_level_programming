#include "lists.h"

/**
 * add_nodeint-adds a new node at the end of a listint_t list
 * @head:address of the first node
 * @n:int data to add to the new node
 *
 * Return:pointer(address of the new link)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;
	next = *head;
	if (next == NULL)
	{
	*head = new;
	return (new);
	}
	while (next->next != NULL)
	next = next->next;
	next->next = new;
	return (new);
}
