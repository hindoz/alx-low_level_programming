#include"main.h"
/**
 * str_concat - function used to concatenate 2 strings
 * @s1 : string 1
 * @s2 : string 2
 * Return: return pointer to the resulted array or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *p;

	/*
	 * if ((s1 != NULL) && (s2 != NULL))
	 * {
	*/
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		i++;
	}
	else
		i = 0;
	if (s2 != NULL)
	{
	while (s2[j] != '\0')
		j++;
	}
	else 
		j = 0;
	/*
	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	*
	 * }
	 * else if (s1 == NULL)
	 * i = 0;
	 * else if (s2 == NULL)
	 * j = 0;
	 */

	p = malloc(sizeof(char) * (i + j) + (1));

	if (p == NULL)
		return (NULL);

	{
	for (l = 0; l < i; l++)
		p[l] = s1[l];
	for (k = 0; k < j; k++)
	{
		p[l] = s2[k];
		l++;
	}
	p[l] = '\0';
	return (p);
	}
}
