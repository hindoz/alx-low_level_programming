#include "main.h"

/**
 * print_sign  - test number if it's greater or lower than zero
 *
 * @n : tested number
 *
 * Return:  1 (if n is greater than zero) 0 (equal zero) -1 (less than zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
/*		_putchar(',');
		_putchar(' ');*/
		return (1);
/*		_putchar('\n');*/
	}
	else if (n == 0)
	{
		_putchar(48);
/*		_putchar(',');
		_putchar(' ');*/
		return (0);
/*		_putchar('\n');*/
	}
	else if (n < 0)
	{
		_putchar(45);
/*		_putchar(',');
		_putchar(' ');*/
		return (-1);
/*		_putchar('\n');*/
	}
	return (0);
}
