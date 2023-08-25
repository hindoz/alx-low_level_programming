#include"main.h"

/**
 * rot13 - function that encode a string using rot13
 * @str : received string
 * Return: return the resulted string
 */

char *rot13(char *str)
{
	int i;
	char *n;

	for (i = 0; str[i] != '\0'; i++)
	{
		*n = str[i] += 13;
		n++;
	}
	return (n);
}
