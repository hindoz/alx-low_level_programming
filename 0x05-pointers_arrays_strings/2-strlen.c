#include"main.h"

/**
 * _strlen - calculate the length of a string
 *
 * @s : element of string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	j++;
	}
return (j);
}
