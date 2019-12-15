#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Head of dlistint_t list.
 * @n: Integer.
 * Return: The address of the new element. NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NwNd;

	NwNd = malloc(sizeof(dlistint_t));
	if (NwNd == NULL)
		return (NULL);

	NwNd->n = n;
	NwNd->prev = NULL;

	if (*head == NULL)
	{
		NwNd->next = NULL;
		*head = NwNd;
	}
	else
	{
		NwNd->next = *head;
		(*head)->prev = NwNd;
		*head = NwNd;
	}

	return (NwNd);
}
