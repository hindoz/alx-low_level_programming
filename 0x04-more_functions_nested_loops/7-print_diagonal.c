#include"main.h"

/**
 * print_diagonal - draw a diagonal line
 *
 * @n : number of \ that will be drawn
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i < n + 1; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
