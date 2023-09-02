#include "main.h"

/**
 * _islower - test lower_case letter
 *
 * @c : tested input
 *
 * Return:  1 (Success)
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
	_putchar('\n');

}
