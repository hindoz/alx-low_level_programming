#include"main.h"
/**
 * _strstr - function that locate substring
 * @haystack : string that compared with
 * @needle : string that search to
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
			if (haystack[i] == needle[j])
			{
				*a = *haystack;
				*b = *needle;
			}

	}
	for (; *b != '\0'; a++; b++)
		if (*a == *b)
			return (a);
}
