#include"main.h"

/**
 * _strncpy - function that copy specific number of elements from src to dest
 * @dest : string which copied to _final string
 * @src : string to be copied
 * @n : number of elements need to be copied
 * Return: return the final string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n; i++)
		{
		dest[i] = src[i];
		}
return (dest);
}
