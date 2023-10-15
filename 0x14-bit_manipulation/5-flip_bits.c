#include "main.h"

/**
*flip_bits - flip 2 bits with each other
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipd = n ^ m;
	int count = 0;

	while (flipd)
	{
		if (flipd & 1)
			count++;
		flipd >>= 1;
	}
	return (count);
}
