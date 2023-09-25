#include"lists.h"

/**
 * print_list - fuction that used to print all element of the list
 * @h : pointer to header
 * Return: number of the elements of list
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
