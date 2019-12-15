#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: linked list
 * @n: int passed
 * Return: length
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElement;

	newElement = malloc(sizeof(dlistint_t));

	if (newElement == NULL)
		return (NULL);
	newElement->n = n;
	newElement->next = *head;
	*head = newElement;

	return (newElement);
}
