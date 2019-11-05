#include "lists.h"
/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *@head:
 *@index:
 *Return: The nth node of listint_t. NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int szfnd = 0;

	while (head != NULL)
	{
		if (szfnd == index)
			return (head);
		head = head->next;
		szfnd++;
	}
	return (NULL);
}
