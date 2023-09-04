#include"main.h"
/**
 * _strdup - function used to duplicate
 * @str : string needed to be duplicated
 * Return: return pointer to the new array or NULL otherwise
 */

char *_strdup(char *str)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * sizeof(str));
	if (str != NULL)
	{
		for (i = 0; i < '\0'; i++)
		{
		p[i] = str[i];
		i++;
		putchar(p[i]);
		}
		return (p);
	}
	else
		return (NULL);
}
