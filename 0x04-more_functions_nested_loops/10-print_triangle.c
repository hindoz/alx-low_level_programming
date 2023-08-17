#include"main.h"

/**
 * print_triangle - draw a triangle line
 *
 * @size : size of triangle
 *
 */

void print_triangle(int size)
{
	int i, j, k;
	int l = 1;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = i; j > 1; j--)
				_putchar(' ');

			for (k = 0; k < l; k++)
				_putchar('#');

			_putchar('\n');
			l++;
		}
	}
	else
	_putchar('\n');
}
