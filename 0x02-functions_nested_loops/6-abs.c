#include "main.h"

/**
 * _abs - compute absolute value
 *
 * @i : tested number
 *
 * Return:  0 (Success)
 */

int _abs(int i)
{
	if (i >=  0)
		_putchar(i);
	else
	{
		i = i * -1;
		_putchar(i);
	}
		return (0);
	_putchar('\n');

}
