#include"main.h"

/**
 * _strcmp - function that compare two strings with each other
 * @s1 : first string
 * @s2 : second string
 * Return: return the result of comparing
 */

int _strcmp(char *s1, char *s2)
{
int i, j = 0;

	for (i = 0; *s1 < '\0'; i++)
		{
		if (*s1[i] == *s2[i])
			j += 0;
		else if (*s1[i] != *s2[i])
			j++;
		}
	return (j);
}
