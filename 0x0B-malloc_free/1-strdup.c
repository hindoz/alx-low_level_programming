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

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * i);

	if (p == NULL || str == NULL)
		return (NULL);

	else
	{
		for (j = 0; j < i; j++)
		p[j] = str[j];	
		return (p);
	}
	/*else
		return (NULL);*/
}
