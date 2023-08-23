#include"main.h"

/**
 * _strcmp - function that compare two strings with each other
 * @s1 : first string
 * @s2 : second string
 * Return: return the result of comparing
 */

int _strcmp(char *s1, char *s2)
{
int j = 0;
	while (*s1 != '\0')
	{

		if (*s1 == *s2)
		{
			j += 0;
			s1++;
			s2++;
		}
		else if (*s1 != *s2)
		{
			j++;
			s1++;
			s2++;
		}
	}

	return (j);
}
