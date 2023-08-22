#include"main.h"

/**
 * rev_string - prints a string
 *
 * @s : entered string
 *
 */

void rev_string(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		j++;
	}
	j--;
		_putchar('\n');
		while (j >= 0)
		{
			_putchar(s[j]);
			j--;
		}
		_putchar('\n');
}
