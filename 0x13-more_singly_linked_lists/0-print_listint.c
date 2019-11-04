#include "lists.h"
/**
 *print_listint - Prints all the elements (integers) of a list.
 *@h: Head node.
 *Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t ndsnmbr = 0;
	const listint_t *nwhd;

	nwhd = h;
	while (nwhd)
	{
		printf("%d\n", nwhd->n);
		nwhd = nwhd->next;
		ndsnmbr++;
	}
	return (ndsnmbr);
}
