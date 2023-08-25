#include"main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest : string which appended to _final string
 * @src : string to appended
 * Return: return the concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i,l, j = 0;

for (i = 0; dest[i] != '\0'; i++)
{
	j++;
}
for (l = 0; src[i] <= i; l++)
{
	dest[j + l] = src[l];
}
return (dest);
}
