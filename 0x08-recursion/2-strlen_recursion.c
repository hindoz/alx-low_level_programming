#include"main.h"
/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s : input string
 * Return: return the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
