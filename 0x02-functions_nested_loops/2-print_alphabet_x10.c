#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	for (int j = 0; j < 10; j++)
	{
		int i = 97;

		while (i < 123)
		{
		_putchar(i);
		i++;
		}
	_putchar('\n');
	}
}
