#include "main.h"

/**
 * print_last_digit - calculate last digit
 *
 * @i : tested number
 *
 * Return:  0 (Success)
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (i < 0)
		j = j * -1;
	return (j);
	putchar('0' + j);

}
