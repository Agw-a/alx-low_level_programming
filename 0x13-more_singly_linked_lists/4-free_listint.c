#include <stdio.h>

/**
 * free_listint-that frees a listint_t list.
 * @head:Pointer(Adress)to the head of
 * listint_t list.
 * Return:no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *new;

	if (head != NULL)
	{
	new = *head;
	while ((temp = new) != NULL)
	{
	new = new->next;
	free(temp);
	}
	*head = NULL;
	}
}
