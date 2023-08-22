#include"main.h"

/**
 * print_rev - print a string in reverse way
 *
 * @s : element of string
 *
 */

void  print_rev(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	j++;
	}
	while ( j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
