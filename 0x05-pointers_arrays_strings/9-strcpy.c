#include"main.h"

/**
 * _strcpy - copy one string to another one
 * @src : source string
 * @dest : destination string
 * Return: destination string dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}
