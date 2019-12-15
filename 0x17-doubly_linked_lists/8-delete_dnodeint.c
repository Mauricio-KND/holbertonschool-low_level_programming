#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes index's node of dlistint_t linked list.
 * @head: Pointer to a dlistint_t linked list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded. -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *Ptr = NULL;

	if (head)
	{
		for (Ptr = *head; index && Ptr; index--, Ptr = Ptr->next)
			;
		if (!index && Ptr)
		{
			if (Ptr->prev)
				Ptr->prev->next = Ptr->next;
			else
				*head = Ptr->next;
			if (Ptr->next)
				Ptr->next->prev = Ptr->prev;
			free(Ptr);
			return (1);
		}
	}
	return (-1);
}
