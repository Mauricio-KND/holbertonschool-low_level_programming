#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Head of dlistint_t list.
 * @n: Integer.
 * Return: The address of the new element. NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
