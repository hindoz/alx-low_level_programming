#include"main.h"

/**
 * string_nconcat - function that concat 2 strings together
 * @s1 : pointer to the first string
 * @s2 : pointer to the second string
 * @n :  number of elements from second string
 * Return: to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, l;

	if (n >= strlen(s2))
		n = strlen(s2);
	j = strlen(s1);
	ptr = malloc((j * n) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		ptr[i] = s1[i];
	}
	for (l = 0; l < n; l++)
	{
		ptr[i + l] = s2[l];
	}
	ptr[l  + i] = '\0';
	return (ptr);
}
