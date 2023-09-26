#include"lists.h"

/**
 * get_nodeint_at_index - function that print the node with entered index.
 * @head : head of the list.
 * @index : index of desired node.
 * Return: return of returned node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (num != index)
	{
		num++;
		head = head->next;
	}
	if (head != NULL)
		return (head);
	return (NULL);
}
