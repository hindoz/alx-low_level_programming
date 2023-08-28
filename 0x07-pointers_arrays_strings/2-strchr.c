#include"main.h"
/**
 * _strchr - function that locate a character in a string
 * @s : string to search in
 * @c : character to search for
 * Return: pointer to first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		s = s + i;
		if (*s == c)
		{
			break;
		}
		else
			return (NULL);
	}
	return (s);
}
