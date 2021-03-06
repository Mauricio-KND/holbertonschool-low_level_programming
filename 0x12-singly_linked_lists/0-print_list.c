#include "lists.h"
/**
 *print_list - Prints all the elements of list_t.
 *@h: Pointer to the first item of the list.
 *Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
		return (a);
}
