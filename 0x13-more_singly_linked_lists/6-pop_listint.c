#include "lists.h"

/**
 *pop_listint - Deletes the head node of a listint_t linked list.
 *@head: Head node.
 *Return: The head node’s data (n). If the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t ndhd;

	if (*head == NULL)
		return (0);
	a = (*head)->n;
	ndhd = *head;
	*head = (*head)->next;
	free(ndhd);
	return (a);
}
