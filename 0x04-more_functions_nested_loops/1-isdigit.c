#include"main.h"

/**
 * _isdigit  - Checks for digit characters
 *
 * @c : Entered character
 *
 * Return: 1 if c is a digit, & 0 otherwise
 */

int _isdigit(int c)
{
if (c > 47 && c < 58)
	return (1);
else
	return (0);
}
