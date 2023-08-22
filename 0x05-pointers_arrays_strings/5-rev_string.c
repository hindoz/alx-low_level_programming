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
/*		putchar(s[i]);*/
		j++;
	}
	j--;

/*		putchar('\n');*/
		while (j >= 0)
		{
			putchar(s[j]);
			j--;
		}
		putchar('\n');
}
