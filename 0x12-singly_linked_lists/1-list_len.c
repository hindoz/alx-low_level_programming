#include "lists.h"

/**
 * list_len - fuction that returns length of the list.
 * @h : pointer to the head of the list.
 * Return: return the length.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
