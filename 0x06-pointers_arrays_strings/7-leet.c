#include"main.h"

/**
 * leet - function that convert encode a string to integars
 * @str : received string
 * Return: return the resulted string
 */


char *leet(char *str)
{
	int l, m;
	char i[] = "aeotlAEOTL";
	char j[] = "4307143071";

	for (l = 0; str[l] != '\0'; l++)
	{
		for (m = 0; i[m] != '\0'; m++)
		{
			if (str[l] == i[m])
				str[l] = j[m];
		}
	}
	return (str);
}
