#include"lists.h"

/**
 * print_list - fuction that used to print all element of the list
 * @h : pointer to header
 * Return: number of the elements of list
 *
 */


size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		count++;
		h = h->link;
	}
	return (count);
}
