#include"lists.h"

/**
 * print_list - fuction that used to print all element of the list
 * @h : pointer to header
 * Return: number of the elements of list
 *
 */

size_t print_list(struct list_s *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		count++;
		printf("[%u] %s", h->len, h->str);
		h = h->next;
	}
	return (count);
}
