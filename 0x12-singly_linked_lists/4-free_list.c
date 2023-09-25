#include "lists.h"

/**
 * free_list - fuction that frees a list.
 * @head : first node of the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
