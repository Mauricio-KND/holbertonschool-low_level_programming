#include "lists.h"
/**
 *free_listint - Frees a listint_t list.
 *@head: List to free.
 *Return: Void. Nothing.
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
