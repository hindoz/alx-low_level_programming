#include"main.h"
/**
 * _memcpy - function that copy memory area
 * @dest : location of memory to copy bytes to
 * @src : loncation of memory that copy data from
 * @n : numbers of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
