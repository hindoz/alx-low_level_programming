#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	while ((a > b) && (a > c))
	{
		largest = a;
	}
	while ((b > a) && (b > c))
	{
		largest = b;
	}

	while ((c > a) && (c > b))
	{
		largest = c;
	}

	return (largest);
}
