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
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{
			l = i * j;

			if (l <= 9)
			{
				_putchar(' ');
				_putchar((l % 10) + '0');
			}
			else
			{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
