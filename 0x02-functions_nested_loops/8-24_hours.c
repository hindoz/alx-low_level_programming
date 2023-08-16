#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return:  0 (Success)
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + i);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar('0' + j);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
	}

}
