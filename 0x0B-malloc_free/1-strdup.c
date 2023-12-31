#include"main.h"
/**
 * _strdup - function used to duplicate
 * @str : string needed to be duplicated
 * Return: return pointer to the new array or NULL otherwise
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * i + (1));

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = str[j];
	return (p);

	/*
	 * else
	 * return (NULL);
	 */
}
