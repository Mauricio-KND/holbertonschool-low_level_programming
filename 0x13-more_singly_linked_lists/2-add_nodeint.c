#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning of a list.
 *@head: Pointer to a list.
 *@n: Integer for a new node.
 *Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnd;

	nwnd = malloc(sizeof(listint_t));
	if (nwnd == NULL)
		return (NULL);
	nwnd->n = n;
	nwnd->next = *head;
	*head = nwnd;
	return (nwnd);
}
