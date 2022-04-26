#include "lists.h"

/**
 * add_nodeint-adds a new node at the beginning of a list
 * @head:address of the head of the list
 * @n:data to add to the new link
 *
 * Return:address(pointer) to the new node
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
