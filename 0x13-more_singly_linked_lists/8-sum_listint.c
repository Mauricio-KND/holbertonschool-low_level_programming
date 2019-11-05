#include "lists.h"

/**
 *sum_listint - Sums all the data (n) of a linked list.
 *@head: Head of node.
 *Return: The sum of all data (n) of listint_t. 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
