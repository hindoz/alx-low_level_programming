#include"main.h"
/**
 * _calloc - function that allocate memory to an array
 * @nmemb : number of elements
 * @size : size of the element
 * Return: return pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	ptr = malloc(nmemb * size);
	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
