#include"lists.h"

/**
 * sum_listint - function that sum all the data in a list
 * @head : first node of the list.
 * Return: the sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
