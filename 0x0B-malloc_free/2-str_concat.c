#include"main.h"
/**
 * str_concat - function used to concatenate 2 strings
 * @s1 : string 1
 * @s2 : string 2
 * Return: return pointer to the resulted array or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0;
	char *p;

	if ((s1 != NULL) && (s2 != NULL))
	{
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j));

	for (l = 0; l < i; l++)
		p[l] = s1[l];
	for (i = 0; i < j; i++)
	{
		p[l] = s2[i];
		l++;
	}
	p[l] = '\0';
	return (p);
	}
	else
		return (NULL);
	return (0);
}
