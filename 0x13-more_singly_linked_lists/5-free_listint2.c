#include "lists.h"
/**
 *free_listint2 - Frees a listint_t list.
 *@head:
 *Return: Void. Nothing.
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
