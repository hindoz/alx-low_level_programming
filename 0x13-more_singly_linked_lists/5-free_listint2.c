#include"lists.h"

/**
 * free_listint2 - function that frees a list.
 * @head : head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *ptr;

	tmp = *head;
	while (tmp)
	{
		ptr = tmp;
		tmp = tmp->next;
		free(ptr);
	}
	head = NULL;
}
