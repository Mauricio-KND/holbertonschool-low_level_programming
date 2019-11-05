#include "lists.h"
/**
 *free_listint2 - Frees a listint_t list.
 *@head:Head of node.
 *Return: Void. Nothing.
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)/*If head NULL do nothing*/
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;/*Setting head to NULL*/
}
