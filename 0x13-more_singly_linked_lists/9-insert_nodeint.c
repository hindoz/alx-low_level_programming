#include"lists.h"

/**
 * insert_nodeint_at_index - function that insert a node at specific index.
 * @head : head of the list.
 * @idx : specific index.
 * @n : data to be added to new node.
 * Return: return of new inserted node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *ptr;

	if (*head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;

	while (num != idx)
	{
		num++;
		*head = (*head)->next;
	}
	if (*head != NULL)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	return (NULL);
}
