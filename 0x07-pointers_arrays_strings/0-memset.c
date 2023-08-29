#include"main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s : pointer to the memory area
 * @b : constant that the memory will fill with
 * @n : numbers of bytes that going to be filled
 * Return: a pointer to a memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

