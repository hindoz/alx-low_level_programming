#include"main.h"
/**
 * _strpbrk - function that  searches a string for any of a set of bytes
 * @s : string to search in
 * @accept : string that search for
 * Return: return  pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				break;
			}
		}
	}
	return (s);
}
