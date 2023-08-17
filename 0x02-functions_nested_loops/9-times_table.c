#include "main.h"

/**
 * times_table - print 9 time tables starts from 0
 *
 * Return:  0 (Success)
 */

void times_table(void)
{
	int i, j, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = i * j;
			_putchar(l + '0');
			if(j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
