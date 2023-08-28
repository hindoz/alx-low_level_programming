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
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
			if (*s == *accept)
				i++;
	}
	return (i);
}
