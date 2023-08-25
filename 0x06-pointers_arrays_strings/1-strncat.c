#include"main.h"

/**
 * _strncat - function that append specific number of elements from src to dest
 * @dest : string which appended to _final string
 * @src : string to be appended
 * @n : number of elements need to be appended
 * Return: return the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;

for (i = 0; dest[i] != '\0'; i++)
{
	j++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
