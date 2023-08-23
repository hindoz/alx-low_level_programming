#include"main.h"

/**
 * _atoi - convert a string to an integar
 * @s : received string
 * Return: an integar
 */

int _atoi(char *s)
{
	int i;

for (i = 0; s[i] != '\0'; i++)
{
if (((s[i] == '+') || (s[i] == '-')) && (s[i + 1] == 0 - 9))
	putchar(s[i]);
else if (s[i] == 0 - 9)
	putchar(s[i]);
}
return (s[i]);
}
