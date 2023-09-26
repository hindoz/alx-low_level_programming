#include"lists.h"

/**
 * add_nodeint_end - function that add new node at the end.
 * @head : first node of the list
 * @n : new element to be added
 * Return: address to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;
	return (*head);
}
