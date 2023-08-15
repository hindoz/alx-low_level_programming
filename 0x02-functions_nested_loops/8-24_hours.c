#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return:  0 (Success)
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 00; i < 24; i++)
	{
		for (j = 00; j < 60; j++)
		{
			_putchar('0' + i);
			_putchar(':');
			_putchar('0' + j);
			_putchar('\n');
		}
	}

}
