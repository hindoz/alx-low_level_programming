#include "lists.h"

/**
 * add_node_end - add new node to the end.
 * @head : pointer to the first node.
 * @str : string to be added.
 * Return:  address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	int i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	while (str[i])
		i++;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = NULL;
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newnode;
	return (*head);
}
