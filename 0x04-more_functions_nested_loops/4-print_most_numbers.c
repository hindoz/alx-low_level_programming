#include"main.h"

/**
 * print_numbers - print numbers from 0 to 9 except 2 & 4
 *
 */

void print_numbers(void)
{
for (int i = 48; i < 58; i++)
	{
	if (i != 50 || i != 52)
		_putchar(i);
	}
	_putchar('\n');
}
