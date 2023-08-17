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

	while (size > 0)
	{
		for (i = 1; i < size + 1; i++)
		{
			for (j = size - 1; j >= 0; j--)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
