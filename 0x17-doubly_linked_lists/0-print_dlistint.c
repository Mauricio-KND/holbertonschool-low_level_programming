#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to dlistint_t list.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t Nodes = 0;

	for (; h; h = h->next, Nodes++)
		printf("%d\n", h->n);
	return (Nodes);
}
