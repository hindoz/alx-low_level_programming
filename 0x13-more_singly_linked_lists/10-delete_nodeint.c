#include"lists.h"

/**
 * delete_nodeint_at_index - function that delete a node at specific index.
 * @head : head of the list.
 * @index : specific index.
 * Return: return the result of the operation.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *ptr;

	if (*head == NULL)
		return (-1);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (-1);

	while (num != index)
	{
		num++;
		*head = (*head)->next;
	}
	if (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	return (-1);
}
