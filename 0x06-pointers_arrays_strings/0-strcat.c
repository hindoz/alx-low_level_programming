#include"main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest : string which appended to _final string
 * @src : string to appended
 * Return: return the concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i, j = 0;

for (i = 0; dest[i] <= '\0'; i++)
{
	j++;
}
for (i = 0; src[i] <= '\0'; i++)
{
	dest[j] = src[i];
	j++;
}
return (dest);
putchar('\n');
}
