#include "lists.h"

/**
 * add_node - fuction that insert new node.
 * @head : the first node of the list.
 * @str : one of the contents of list.
 * Return: the pointer to new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	while (str[i])
		i++;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
