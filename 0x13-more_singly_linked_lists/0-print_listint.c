#include"lists.h"

/**
 * print_listint - funcion that list all nodes and return number of them.
 * @h : pointer to the head.
 * Return: the number of the nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
/*
 * ptr = malloc(sizeof(listint_t));
 * if (ptr == NULL)
 * return (1);
 *
 * *ptr = *h;
*/
	while (h != NULL)
	{
		count++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);

}
