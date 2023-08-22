#include"main.h"

/**
 * puts_half - print half of a string
 *
 * @str : entered string
 *
 */

void  puts_half(char *str)
{
	int i, length,  j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	j++;
	}
	if ((j / 2) == 0)
	{
		length = j / 2;
	}
	else
	{
		length = (j - 1) / 2;
	}
	for (i = length + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
