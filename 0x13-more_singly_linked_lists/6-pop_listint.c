#include"lists.h"

/**
 * pop_listint - delete the head node.
 * @head : head of the list/
 * Return : the head node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
		return (0);
	ptr = *head;
	num = ptr->n;
	(*head) = (*head)->next;
	free(ptr);
	return (num);
}
