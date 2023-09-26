#include"lists.h"

/**
 * add_nodeint - function that adds new node at the beginning
 * @head : head of the list.
 * @n : int to be added.
 * Return: address of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	ptr->next = *head;
	ptr->n = n;
	*head = ptr;
	return (*head);
}
