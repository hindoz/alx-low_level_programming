#include"main.h"

/**
 * malloc_checked - check if the reserved memory is done or not
 * @b : received integar
 * Return: poimter to the reserved memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
