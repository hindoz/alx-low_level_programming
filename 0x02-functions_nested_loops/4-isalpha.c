#include "main.h"

/**
 * _isalpha - test lower_case letter
 *
 * @c : tested input
 *
 * Return:  1 (Success)
 */

int _isalpha(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
	_putchar('\n');

}
