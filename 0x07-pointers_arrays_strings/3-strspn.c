#include"main.h"
/**
 * _strspn - funtion that gets length of prefix substring
 * @s : segment that contains byte from accept
 * @accept : bytes to search to
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return(i);
		}
	}
	return (i);
}
