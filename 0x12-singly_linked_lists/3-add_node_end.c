#include "lists.h"
/**
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mylist, *node;
		int a;

		mylist = malloc(sizeof(list_t));
		if (mylist ==NULL)
			return (NULL);
		if (*head != NULL)
		{
			node = *head;
			while (node->next != NULL)
				node = node->next;
			node->next = mylist;
		}
		else
			*head = mylist;
		mylist->str = strdup(str);
		a = 0;
		while (str[a] != '\0')
			a++;
		mylist->len = a;
		return (mylist);
}
