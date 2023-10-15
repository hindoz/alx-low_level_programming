#include"main.h"

/**
 * get_bit - function that return the bit at given index.
 * @n : binary number.
 * @index : given index.
 * Return: the specific binary.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
