#include "lists.h"
/**
 * sum_dlistint - Returns the sum of the data (n) of a dlistint_t linked list.
 * @head: Pointer to a dlistint_t linked list.
 * Return: Sum of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int Sum;

	for (Sum = 0; head != NULL; head = head->next)
		Sum = Sum + head->n;
	return (Sum);
}
